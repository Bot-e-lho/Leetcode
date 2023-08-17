//Problema 101 -- Leetcode

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* left, struct TreeNode* right){
    if( left == NULL && right == NULL ) {
        return true;
    }
    if( left == NULL || right == NULL || left->val != right->val ) {
        return false;
    }
    return checkTree( left->left, right->right ) && checkTree( left->right, right->left );
}
bool isSymmetric(struct TreeNode* root){
    if ( root == NULL ) {
        return true;
    }
    
    return checkTree(root->left, root->right);
}
