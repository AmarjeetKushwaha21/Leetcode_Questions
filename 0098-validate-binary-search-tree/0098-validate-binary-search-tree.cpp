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
    long long maxleft(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
       return max((long long)root->val,max(maxleft(root->left),maxleft(root->right)));
    }
    long long minright(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
       return min((long long)root->val,min(minright(root->left),minright(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        long long lmax=maxleft(root->left);
        long long rmin=minright(root->right);
        if(root->val<=lmax || root->val>=rmin) return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};