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
     * @param root: the given tree
     * @return: the number of uni-value subtrees.
     */
     int ans=0;
    pair<bool,int> all_unival(TreeNode* root)
    {
        if(!root->left && !root->right)
        {
            ans++;
            return {true,root->val};
        }
            
        pair<bool,int>k,k1;
        if(root->left && !root->right)
        {
            k=all_unival(root->left);
            if(k.first && k.second==root->val)
            {
                ans++;
                return {true,root->val};
            }
            else
                return {false,root->val};
        }
        else if(!root->left && root->right)
        {
            k1=all_unival(root->right);
            if(k1.first && k1.second==root->val)
            {
                ans++;
                return {true,root->val};
            }
            else
                return {false,root->val};
        }
        else
        {
            k=all_unival(root->left);
            k1=all_unival(root->right);
            if(k.first && k1.first && k.second==k1.second && k1.second==root->val)
            {
                ans++;
                return {true,root->val};
            }
        }
       

        return {false,root->val};

    }
    int countUnivalSubtrees(TreeNode *root) {
        // write your code here 
        if(!root)
            return 0;
        
        auto p=all_unival(root);

        return ans;
    }
};