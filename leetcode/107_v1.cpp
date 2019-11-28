//
//  107_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/28.
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q({root});
        while(!q.empty()){
            vector<int> level;
            for(int i = q.size();i>0;i--){
                TreeNode* p = q.front();q.pop();
                level.push_back(p->val);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            res.push_back(level);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
