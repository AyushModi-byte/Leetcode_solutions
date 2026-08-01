class Solution {
private:
    int maxSum; // Keeps track of the global maximum path sum

    int calculateBranchSum(TreeNode* node) {
        if (node == nullptr) return 0;

        int leftBranch = std::max(0, calculateBranchSum(node->left));
        int rightBranch = std::max(0, calculateBranchSum(node->right));

        int currentPathSum = node->val + leftBranch + rightBranch;

        maxSum = std::max(maxSum, currentPathSum);

        return node->val + std::max(leftBranch, rightBranch);
    }

public:
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN; 
        calculateBranchSum(root);
        return maxSum;
    }
};