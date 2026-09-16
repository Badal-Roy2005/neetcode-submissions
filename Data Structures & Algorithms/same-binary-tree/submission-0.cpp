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
void solve(TreeNode* p ,  TreeNode* q , bool& check){
    if(p == NULL && q == NULL) return ;
    if(p == NULL || q == NULL) {
        check = false;
        return;
    }
    if(p->val != q->val) check = false;
    solve(p->left , q->left , check);
    solve(p->right , q->right , check);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check = true;
        solve(p , q , check);
        return check;
    }
};
