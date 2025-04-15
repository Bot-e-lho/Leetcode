//Problema 143 -- Leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head){
    if ( head == NULL || head->next == NULL ){
        return;
    }
    struct ListNode* hare = head;
    struct ListNode* tort = head;

    while ( hare != NULL && hare->next != NULL ){ //Descobre o meio
        hare = hare->next->next;
        tort = tort->next;
    }

    struct ListNode* Half = tort->next;
    struct ListNode* Open = NULL;
    struct ListNode* temp = NULL;
    tort->next = NULL;


    while ( Half != NULL ){  // Inverte a segunda metade da lista
        temp = Half->next;
        Half->next = Open;
        Open = Half;
        Half = temp;
    }
    struct ListNode* First = head;
    struct ListNode* tmp_1 = NULL;
    struct ListNode* tmp_2 = NULL;
    Half = Open;

    while ( Half != NULL ){ // Mistura as duas listas ( primeira metade e o inverso da segunda)
        tmp_1 = First->next;
        tmp_2 = Half->next;
        First->next = Half;
        Half->next = tmp_1;
        First = tmp_1;
        Half = tmp_2;
    }

}
