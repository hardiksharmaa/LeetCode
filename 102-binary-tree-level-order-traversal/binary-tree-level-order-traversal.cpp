class Solution {
public:
    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }

    void nodes(TreeNode* root, int x, vector<int>& level) {
        if (!root) return;
        if (x == 1) level.push_back(root->val);
        else {
            nodes(root->left, x - 1, level);
            nodes(root->right, x - 1, level);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int h = height(root);
        for (int i = 1; i <= h; i++) {
            vector<int> level;
            nodes(root, i, level);
            ans.push_back(level);
        }
        return ans;
    }
};