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

class Codec {
public:

void encodeString(TreeNode* root , string& s){
    if(root == nullptr){
        s += "N,";
        return;
    }
    
    s += to_string(root->val);
    s += ',';
    encodeString(root->left , s);
    encodeString(root->right , s);
}
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string encode = "";
        encodeString(root , encode);
        return encode;
    }

TreeNode* solve(vector<string>& node ,int& i){
    if(node[i] == "N"){
        i++;
        return nullptr;
    }

    TreeNode* root = new TreeNode(stoi(node[i]));
    i++;
    root->left = solve(node , i);
    root->right = solve(node , i);
    return root;
}
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        vector<string> node;
        int i = 0;
        
        while(i < data.length()){
            int j = i;
            while(j < data.length() && data[j] != ',')j++;
            node.push_back(data.substr(i , j - i));
            i = j + 1;
        }
        i = 0;
        return solve(node , i);
        // return nullptr;
    }
};
