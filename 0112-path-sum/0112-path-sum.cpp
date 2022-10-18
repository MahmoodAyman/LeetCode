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
    bool pathSum(TreeNode* cur,int curSum,int targetSum){
        if(!cur)return false;
        if(!cur->left && !cur->right){
           curSum+=cur->val;
           return targetSum==curSum;
        }
        return pathSum(cur->left,curSum+cur->val,targetSum)|| pathSum(cur->right,curSum+cur->val,targetSum);
        
    } 
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathSum(root,0,targetSum);
    }
};