//
//  98_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/26.
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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* p = root;
        TreeNode* pre = NULL;
        while(p || !s.empty()){
            while(p){
                s.push(p);
                p=p->left;
            }
            p = s.top(); s.pop();
            if(pre && p->val <= pre->val) return false;
            pre = p;
            p = p->right;
        }
        return true;
    }
};
