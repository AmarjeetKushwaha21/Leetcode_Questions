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
     TreeNode* helper(vector<int>& nums,int lo,int hi){
        if(lo>hi) return NULL;
        int mid=lo+(hi-lo)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=helper(nums,lo,mid-1);
        root->right=helper(nums,mid+1,hi);
        return root;
       }
      void inorder(TreeNode* root, vector<int>& a) {
        if (root == NULL) return;
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> a;
        inorder(root,a);
        return helper(a,0,a.size()-1);
    }
};