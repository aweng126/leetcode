//
//  102_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/9.
//  Copyright © 2019 李庆文. All rights reserved.
//  onelevel复用。不用每层都重新new一次。

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q{{root}};
         vector<int> onelevel;
        while(!q.empty()){
            for(int i = q.size();i>0;--i){
                auto a = q.front(); q.pop();
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
                onelevel.push_back(a->val);
            }
            res.push_back(onelevel);
            onelevel.clear();
        }
        return res;
    }
};
