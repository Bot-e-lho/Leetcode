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

void post_aux(struct Node* root, key* res, int* ind) {
    if (root == NULL) {
        return;
    }

    post_aux(root->left, res, ind);
    post_aux(root->right, res, ind);

    if (*ind < 10000) {
        res[(*ind)++] = root->num;
    }
}

key* postorder(Node* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }

    key* res = (key*)malloc(sizeof(key) * 10000);
    int ind = 0;

    post_aux(root, res, &ind);
    *returnSize = ind;
    return res;
}

int main(int argc, char const* argv[]) {
    Node* no = NULL;

    no = insere(no, 30);
    no = insere(no, 20);
    no = insere(no, 40);
    no = insere(no, 10);
    no = insere(no, 50);
    no = insere(no, 25);
    no = insere(no, 35);

    printf("Arvore:\n");
    print(no);
    printf("\n");

    int size;
    key* temp = postorder(no, &size);

    printf("Arvore(Pos):\n");
    for (int i = 0; i < size; i++) {
        printf("%ld ", temp[i]);
    }
    printf("\n");

    free(temp);
    freeTree(no);
    return 0;
}
