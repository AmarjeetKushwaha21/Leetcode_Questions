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
    void levelSp(TreeNode* r1,TreeNode* r2,int l){
        if(r1==NULL||r2==NULL) return;
        if(l%2!=0){
            swap(r1->val,r2->val);
        }
        levelSp(r1->left,r2->right,l+1);
        levelSp(r1->right,r2->left,l+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==nullptr) return root;
        levelSp(root->left,root->right,1);
        return root; 
    }
};