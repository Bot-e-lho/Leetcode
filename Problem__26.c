//Problema 83 -- Leetcode
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }

struct ListNode *prev = head;
struct ListNode *current = head->next;

    while ( current != NULL ) {
        if ( current->val == prev->val ) {
            struct ListNode *aux = current;
            current = current->next;
            prev->next = current;
            free( aux );
        } else {
            prev = current;
            current = current->next;
        }
    }

return head;
}
