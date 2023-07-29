//Problema 2095 -- Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head){
    if( head == NULL || head->next == NULL ){
        return NULL;
    }
struct ListNode* hare = head;
struct ListNode* tort = head;
struct ListNode* aux = NULL;


    while( hare != NULL && hare->next != NULL ){
        hare = hare->next->next;
        aux = tort;
        tort = tort->next;
    }
    aux->next = tort->next;
    return head;
}
