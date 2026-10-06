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
void solve(TreeNode* root , int left , int right , bool& check){
    if(!check) return;
    if(root == NULL) return;

    if(root->val <= left || root->val >= right){
        check = false;
        return;

    }

    solve(root->left , left, root->val , check);
    solve(root->right , root->val , right , check);

    
}
    bool isValidBST(TreeNode* root) {
        bool check = true;
        solve(root , INT_MIN , INT_MAX , check);
        return check;
    }
};
