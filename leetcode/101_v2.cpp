//
//  101_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/9.
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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSym(root,root);
    }
    bool isSym(TreeNode* a,TreeNode* b){
        if(!a && !b) return true;
        if(!a || !b) return false;
        return (a->val == b->val) && (isSym(a->left,b->right) &&isSym(a->right,b->left));
    }

};
