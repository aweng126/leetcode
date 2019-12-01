//
//  199_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//  实际上就是将这个题目转化为之前的层序遍历数组的题目。

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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> rows;
        vector<int> res;
        queue<TreeNode*> q{{root}};
        while(!q.empty()){
            vector<int> onelevel;
            for(int i =q.size();i>0;i--){
                TreeNode* t = q.front();q.pop();
                onelevel.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            rows.push_back(onelevel);
        }
        for(int i = 0;i<rows.size();i++){
            res.push_back(rows[i].back());
        }
        return res;
    }
};
