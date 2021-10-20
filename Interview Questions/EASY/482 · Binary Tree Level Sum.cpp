/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param root: the root of the binary tree
     * @param level: the depth of the target level
     * @return: An integer
     */
    int sum = 0;
    int levelSum(TreeNode * root, int level) {
        // write your code here
        targetLevelSumCalculator(root, 1, level);
        return sum;
    }
    void targetLevelSumCalculator(TreeNode *root, int currLevel, int level) {
        if(!root) return;
        if(currLevel == level) {
            sum += root->val;
            return;
        }
        targetLevelSumCalculator(root->left, currLevel + 1, level);
        targetLevelSumCalculator(root->right, currLevel + 1, level);
    }
};