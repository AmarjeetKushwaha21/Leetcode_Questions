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
     int sum=0;
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void sumofLeaf(TreeNode* root,int l){
        if(root==NULL) return ;
        queue<TreeNode*> q;
        q.push(root);
        int lev=0;
        while(!q.empty()){
            int sz=q.size();
            int s=0;
            for(int i=0;i<sz;i++){
            TreeNode* curr=q.front();
            q.pop();
            s+=curr->val;
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
            }
            lev++;
            if(l==lev){
                sum=s;
                return;
            }
        }
        return ;
    }
    int deepestLeavesSum(TreeNode* root) {
        int l=level(root);
        sumofLeaf(root,l);
       return sum; 
    }
};