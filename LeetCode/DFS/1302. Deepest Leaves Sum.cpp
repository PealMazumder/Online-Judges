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
    void dfs(TreeNode *root, int depth, int &deepest, int &sum)
    {
        if(!root) return;
        if(depth == deepest) sum += root -> val;
        else if(depth > deepest) deepest = depth, sum = root -> val;
        
        dfs(root -> left, depth + 1, deepest, sum);
        dfs(root -> right, depth + 1, deepest, sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        int deepest = 0, sum = 0;
        dfs(root, 0, deepest, sum);  
        return sum;
    }
};