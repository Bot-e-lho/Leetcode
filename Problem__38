#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long key;

typedef struct Node {
    key num;
 //   int height;
    struct Node* left;
    struct Node* right;
} Node;

int maxDepth( Node* root){
    if ( root == NULL ){
        return 0;
    }
    int left = maxDepth( root->left );
    int right = maxDepth( root->right );
    return 1 + ( left > right ? left : right );
}


Node* create(key a) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->num = a;
 //   node->height = 1;
    node->left = NULL;
    node->right = NULL;
    return node;
}





Node* insere(Node* node, key a) {
    if (node == NULL)
        return create(a);

    if (a < node->num)
        node->left = insere(node->left, a);
    else if (a > node->num)
        node->right = insere(node->right, a);
    else
        return node;


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

int main(int argc, char const* argv[]) {
    Node* root = NULL;

    root = insere(root, 30);
    root = insere(root, 20);
    root = insere(root, 40);
    root = insere(root, 50);
    root = insere(root, 25);
    root = insere(root, 35);

    printf("\nArvore:\n");
    print(root);
    printf("\n");
    int temp = maxDepth(root);
    printf("\nA altura da arvore eh: %d\n", temp);
    freeTree(root);
    return 0;
}
