#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef long key;

typedef struct Node {
    key num;
    int height;
    struct Node* left;
    struct Node* right;
} Node;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(struct Node* node) {
    if (node == NULL)
        return 0;
    return node->height;
}

Node* create(key a) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->num = a;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* rot_left(Node* y) {
    Node* x = y->right;
    y->right = x->left;
    x->left = y;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

Node* rot_right(Node* x) {
    Node* y = x->left;
    x->left = y->right;
    y->right = x;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

int balance(Node* node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
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

    node->height = 1 + max(height(node->left), height(node->right));

    int comp = balance(node);

    if (comp > 1 && a < node->left->num)
        return rot_right(node);

    if (comp < -1 && a > node->right->num)
        return rot_left(node);

    if (comp > 1 && a > node->left->num) {
        node->left = rot_left(node->left);
        return rot_right(node);
    }

    if (comp < -1 && a < node->right->num) {
        node->right = rot_right(node->right);
        return rot_left(node);
    }

    return node;
}

bool compare( Node* node, Node* subnode ){
    if ( node == NULL && subnode == NULL ){
        return true;
    } else if ( node == NULL || subnode == NULL ){
        return false;
    }
    return (node->num == subnode->num) && compare(node->left, subnode->left) && compare(node->right, subnode->right);
}
bool isSubtree( Node* root, Node* subRoot){
    if ( root == NULL ) {
        return false;
    } else if ( compare(root, subRoot) ) {
                return true;
    } 
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    
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
    root = insere(root, 10);
    root = insere(root, 50);
    root = insere(root, 25);
    root = insere(root, 35);

    printf("\nArvore:\n");
    print(root);
    printf("\n");

    Node* subRoot = NULL;
    subRoot = insere(subRoot, 30);
    subRoot = insere(subRoot, 20);
    subRoot = insere(subRoot, 40);

    if ( isSubtree(root, subRoot) ){
        printf("\nÉ uma subarvore\n");
    } else {
            printf("\nNao e uma subarvore\n");
    }
    freeTree(subRoot);
    freeTree(root);
    return 0;
}
