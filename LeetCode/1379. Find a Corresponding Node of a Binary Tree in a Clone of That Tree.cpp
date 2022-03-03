/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> qo, qc;
        qo.push(original);
        qc.push(cloned);
        while(!qo.empty()) {
            auto curr_o = qo.front();
            auto curr_c = qc.front();
            qo.pop(), qc.pop();
            if(curr_o == target) {
                return curr_c;
            }
            if(curr_o->left != nullptr) {
                qo.push(curr_o->left);
                qc.push(curr_c->left);
            }
            if(curr_o->right != nullptr) {
                qo.push(curr_o->right);
                qc.push(curr_c->right);
            }
        }
        return nullptr;
    }
};