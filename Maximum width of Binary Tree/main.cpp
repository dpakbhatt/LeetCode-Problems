class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        long maxi = 0;
        while(!q.empty()) {
            long left_most = q.front().second, right_most = left_most;
            int size = q.size();
            for(int i = 0; i < size; i++) {
                TreeNode* curr = q.front().first;
                right_most = q.front().second;
                q.pop();
                if(curr->left != NULL) q.push({curr->left, 2 * right_most});
                if(curr->right != NULL) q.push({curr->right, 2 * right_most + 1});
            }
            maxi = max(maxi, right_most - left_most + 1);
        }
        return maxi;
    }
};
