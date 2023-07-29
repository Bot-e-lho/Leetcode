//Problema 203 -- Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    if( head == NULL ){
        return NULL;
    }

struct ListNode* aux = head;
struct ListNode* temp = NULL;

    while( aux != NULL ){
        if( aux->val == val ){
            if( temp != NULL ){
                temp->next = aux->next;
                free(aux);
                aux = temp->next;
            } else { 
                head = aux->next;
                free(aux);
                aux = head;
            }
        } else {
            temp = aux;
            aux = aux->next;
        }
    }
    return head;
}
