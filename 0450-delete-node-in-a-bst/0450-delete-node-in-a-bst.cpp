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
    TreeNode* InPred(TreeNode* root){
        TreeNode* pre=root->left;
        while(pre->right!=NULL){
            pre=pre->right;
        }
        return pre;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
        // case: 1
            if(root->left==NULL && root->right==NULL) return NULL;
        // case: 2
            if(root->left==NULL||root->right==NULL){
                if(root->left!=NULL) return root->left;
                return root->right;
            }
        // case: 3
            if(root->left!=NULL && root->right!=NULL){
                TreeNode* pred=InPred(root);
                root->val=pred->val;
                root->left=deleteNode(root->left,pred->val);
            }
        }
        else if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else{
            root->right=deleteNode(root->right,key);
        }
         return root;  
    }
};