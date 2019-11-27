//
//  110_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/27.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if (abs(TreeHeight(root->right)-TreeHeight(root->left))>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
    
    int TreeHeight(TreeNode* root){
        if(!root) return NULL;
        return max(TreeHeight(root->left),TreeHeight(root->right))+1;
    }
};
