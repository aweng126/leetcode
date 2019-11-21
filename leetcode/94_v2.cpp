//
//  94_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/21.
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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stk;
        while(true){
            while(root){
                stk.push(root);
                root = root->left;
            }
            if(stk.empty()) return res;
            TreeNode* node = stk.top();
            stk.pop();
            res.push_back(node->val);
            root = node->right;
        }
        return res;
    }
};
