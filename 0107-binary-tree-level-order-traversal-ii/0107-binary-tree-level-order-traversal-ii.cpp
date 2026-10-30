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
    vector<vector<int>> ans;
    void helper(TreeNode* root){
        if(root==nullptr) return;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int> v;
            for(int i=0;i<sz;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
                v.push_back(curr->val);
            }
            ans.push_back(v);
        }
        return ;
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        helper(root);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};