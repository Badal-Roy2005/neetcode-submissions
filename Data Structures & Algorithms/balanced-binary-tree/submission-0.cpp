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
int solve(TreeNode* root , bool& check){
    if(root == NULL) return 0 ;
    int l = solve(root->left , check);
    int r = solve(root->right , check);
    if(abs(r - l) > 1) check = false;
    return 1 + max(l , r);
}
    bool isBalanced(TreeNode* root) {
        bool check = true;
        solve(root , check);
        return check;
    }
};
