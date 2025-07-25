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
    bool ans=true;
    long long prev=LLONG_MIN;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(prev>=(root->val)) ans=false;
        prev=root->val;
        inorder(root->right);
    }

    bool isValidBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};