//Problema 876 -- Leetcode
//Versão final.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    if ( head == NULL ){
        return NULL;
    }
struct ListNode *N;
struct ListNode *Half_n;
N = Half_n = head;
    while( N != NULL && N->next != NULL ){
        N = N->next->next;
        Half_n = Half_n->next;
    } 
struct ListNode *aux;
    while( head != Half_n ){
        aux = head;
        head = head->next;
        free(aux);
    }
    return Half_n;
}


---------------------------------------------------------------------------------------------------------

//Primeira versão do codigo, possui Leak de memoria.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    if ( head == NULL ){
        return NULL;
    }
struct ListNode *N;
struct ListNode *Half_n;
N = Half_n = head;
    while( N != NULL && N->next != NULL ){
        N = N->next->next;
        Half_n = Half_n->next;
    } 
    return Half_n;
}
