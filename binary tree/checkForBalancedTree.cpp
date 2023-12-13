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
private:
int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        int ans = max(left,right)+1;
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
    
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);

        bool diff = abs(maxDepth(root->left)-maxDepth(root->right))<=1;

        if(left&&right&&diff){
            return true;
        }
        else{
            return false;
        }
    }
};