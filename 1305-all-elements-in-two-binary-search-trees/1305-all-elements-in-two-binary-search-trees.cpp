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
     void pushToVector(TreeNode* root,vector<int> &v){
        if(root==nullptr) return;
        pushToVector(root->left,v);
        v.push_back(root->val);
        pushToVector(root->right,v);
     }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        if(root1!=nullptr){ 
        pushToVector(root1,v);
        }
        if(root2!=nullptr){
        pushToVector(root2,v);
        }
        sort(v.begin(),v.end());
        return v;
    }
};