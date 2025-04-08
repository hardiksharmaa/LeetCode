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
    // void solve(TreeNode* root,vector<int> &ans){
    //     if(root==NULL) return;
    //     solve(root->left,ans);
    //     solve(root->right,ans);
    //     ans.push_back(root->val);

    // }
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        if(!root) return ans;
        TreeNode* curr=root;
        TreeNode* vis=NULL;
        while(curr!=NULL || !st.empty()){
            if (curr) {
                st.push(curr);
                curr = curr->left;
            }
            else {
                TreeNode* peekEle=st.top();
                if(vis!=peekEle->right && peekEle->right){
                    curr=peekEle->right;
                }
                else{
                    ans.push_back(peekEle->val);
                    vis = peekEle;
                    st.pop();
                }
            }

        }
        return ans;
    }
};