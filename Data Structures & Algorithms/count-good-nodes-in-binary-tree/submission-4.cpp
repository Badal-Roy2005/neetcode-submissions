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
    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count = 1;
        while(!q.empty()){
            int n = q.size();
            for(int i = 0  ;i < n;i++){
                TreeNode* temp = q.front();
               
                q.pop();
                if(temp->left != NULL){
                    if(temp->left->val < temp->val){
                        temp->left->val = temp->val;
                    }else count++;
                    
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    if(temp->right->val < temp->val){
                        temp->right->val = temp->val;
                    }else count++;
                    q.push(temp->right);
                }
            }
        }
       

        return count;
    }
};
