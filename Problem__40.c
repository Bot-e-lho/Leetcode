#include <stdio.h>
#include <stdlib.h>

typedef long key;

typedef struct Node {
    key num;
    struct Node* left;
    struct Node* right;
} Node;

Node* create(key a) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->num = a;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insere(Node* node, key a) {
    if (node == NULL)
        return create(a);

    if (a < node->num){
        node->left = insere(node->left, a);
    }else if (a > node->num){
        node->right = insere(node->right, a);
    }else{
        return node;
	}
	return node;
}

void freeTree(Node* no) {
    if (no != NULL) {
        freeTree(no->left);
        freeTree(no->right);
        free(no);
    }
}

void print(Node* no) {
    if (no != NULL) {
        print(no->left);
        printf("%ld ", no->num);
        print(no->right);
    }
}

void pre_aux( Node* root, key* res, int* ind) {
    if (root == NULL) {
        return;
    }
	if (*ind < 10000) {
        res[(*ind)++] = root->num;
    }

    pre_aux(root->left, res, ind);
    pre_aux(root->right, res, ind);
}

key* preorder( Node* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }

    key* res = (key*)malloc(sizeof(key) * 10000);
    int ind = 0;

    pre_aux(root, res, &ind);
    *returnSize = ind;
    return res;
}

int main(int argc, char const* argv[]) {
    Node* no = NULL;

    no = insere(no, 1);
    no = insere(no, 3);
    no = insere(no, 5);
    no = insere(no, 6);
    no = insere(no, 2);
    no = insere(no, 4);

    printf("Arvore:\n");
    print(no);
    printf("\n");

    int size;
    key* temp = preorder(no, &size);

    printf("Arvore (Pre):\n");
    for (int i = 0; i < size; i++) {
        printf("%ld ", temp[i]);
    }
    printf("\n");

    free(temp);
    freeTree(no);
    return 0;
}
