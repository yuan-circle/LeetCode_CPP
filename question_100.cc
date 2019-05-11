/************************
 * This problem is asked for compare if two tree is the same;
 * My main idea is return isSameTree(p->right,q->right) && isSameTree(p->left,q->left);
 ************************/


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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr)
            return true;
        else if((p == nullptr && q != nullptr) || (p != nullptr && q==nullptr))
            return false;
        if(p->val != q->val)
           return false; 
        else
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
