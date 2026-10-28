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
    void stradd(TreeNode* root,int path){
        if(root==nullptr) return;
        path=path*10+root->val;
        if(root->left==nullptr && root->right==nullptr){
          sum+=path;
        }
        stradd(root->left,path);
        stradd(root->right,path);
    }
    int sumNumbers(TreeNode* root) {
        stradd(root,0);
        return sum;
    }
};