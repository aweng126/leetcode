//
//  129_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/8.
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
    int sumNumbers(TreeNode* root) {
      return helper(root,0);
    }
    int helper(TreeNode* root, int num){
        if(!root) return 0;
        if(!root->left && !root->right) return root->val + num*10;
        num = num*10 +root->val;
        return helper(root->left,num) + helper(root->right,num);
    }
};
