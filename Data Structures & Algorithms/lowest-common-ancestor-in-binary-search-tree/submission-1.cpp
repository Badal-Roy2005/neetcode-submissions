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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     unordered_set<TreeNode*> s;

     TreeNode* temp = root;
     s.insert(temp);
     while(temp != p){
        if(p->val < temp->val) temp = temp->left;
        else temp = temp->right;
        s.insert(temp);
     }   

     TreeNode* ans = nullptr;
     temp = root;
     while(temp != q){
        if(q->val < temp->val) temp = temp->left;
        else temp = temp->right;
        if(s.count(temp)  > 0){
            ans = temp;
        }
     }
     if(!ans) return root;
     return ans;

    }
};
