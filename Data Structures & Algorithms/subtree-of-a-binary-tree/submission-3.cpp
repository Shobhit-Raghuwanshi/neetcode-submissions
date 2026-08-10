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

    // TreeNode* find(TreeNode* root, TreeNode* subRoot){
    //     if(root == NULL){
    //         return root;
    //     }

    //     if(root->val == subRoot->val){
    //         return root;
    //     }
    //     TreeNode* left = find(root->left, subRoot);
    //     if(left){
    //         return left;
    //     }else{
    //         return find(root->right, subRoot);
    //     }
    // }

    bool check(TreeNode* root, TreeNode* subRoot){
        if(root == NULL || subRoot == NULL){
            if(root == NULL && subRoot == NULL){
                return true;
            }else{
                return false;
            }
        }

        if(root->val != subRoot->val){
            return false;
        }else{
            return check(root->left , subRoot->left) && check(root->right , subRoot->right);
        }

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL){
            return false;
        }

        

        if(check(root , subRoot)){
            return true;
        }

        return isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot);
    }
};
