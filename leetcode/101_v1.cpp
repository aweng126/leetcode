//
//  101_v1.cpp
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
    bool isSymmetric(TreeNode* root) {
        return isSym(root,root);
    }
    bool isSym(TreeNode* l,TreeNode* r){
        if(!l || !r) return l==r;
        return l->val == r->val && isSym(l->right,r->left)&&isSym(l->left,r->right);
    }
};
