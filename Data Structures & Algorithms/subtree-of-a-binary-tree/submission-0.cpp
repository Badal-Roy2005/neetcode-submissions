/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
void equal(TreeNode* root , TreeNode* subRoot, bool& check){
    if(root == NULL && subRoot == NULL) return;
    if(root == NULL || subRoot == NULL){
        check = false;
        return;
    }
    if(root->val != subRoot->val){
        check = false;
        return;
    }
    equal(root->left, subRoot->left , check);
    equal(root->right, subRoot->right , check);
}
void solve(TreeNode* root , TreeNode* subRoot ,bool& check){
    if(root == NULL) return;
    if(root->val == subRoot->val){
        bool temp = true;
        equal(root , subRoot , temp);
        if(temp) check = true;

    }
    solve(root->left , subRoot , check);
    solve(root->right , subRoot , check);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool check = false;
        solve(root , subRoot , check);
        return check;
    }
};
