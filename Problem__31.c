//Problema 234 -- Leetcode
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
if (head == NULL || head->next == NULL) {
        return true;
    }

    struct ListNode* temp = head;
    struct ListNode* Half = head;

    while (temp != NULL && temp->next != NULL) {
        Half = Half->next;
        temp = temp->next->next;
    }

    struct ListNode* prev = NULL;
    struct ListNode* pres = Half;
    struct ListNode* nxt = NULL;
    while (pres != NULL) {
        nxt = pres->next;
        pres->next = prev;
        prev = pres;
        pres = nxt;
    }

    struct ListNode* First = head;
    struct ListNode* Second = prev;

    while (Second != NULL) {
        if (First->val != Second->val) {
            return false;
        }
        First = First->next;
        Second = Second->next;
    }

    return true;
}
