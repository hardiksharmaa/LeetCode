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
    int maxi;

    int func(TreeNode* root){
        if(root==NULL) return 0;
        int l=func(root->left);
        int r=func(root->right);

        int koi_ek=max(l,r)+root->val;
        int both=l+r+root->val;
        int root_best=root->val;

        maxi=max({maxi,koi_ek, both, root_best});
        return max(koi_ek, root_best);
    }
    int maxPathSum(TreeNode* root) {
        maxi=INT_MIN;
        func(root);
        return maxi;
    }
};