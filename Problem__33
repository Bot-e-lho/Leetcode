//Problema 328 -- Leetcode
//reorganizar os nós da lista: os nós com índices ímpares precedam os nós com índices pares.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head){
    if ( head == NULL ){
        return NULL;
    }
struct ListNode* odd = head;
struct ListNode* even = head->next;
struct ListNode* aux = even;

    while ( even != NULL && even->next != NULL ){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = aux;
    return head;
}
