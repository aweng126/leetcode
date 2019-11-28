//
//  103_v1.cpp
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q {{root}};
        int index = 0;
        while(!q.empty()){
            vector<int> level;
            for(int i = q.size();i>0;--i){
                TreeNode* t = q.front();q.pop();
                if(index%2 == 0){
                    level.push_back(t->val);
                }else{
                    level.insert(level.begin(),t->val);
                }
                if(t->left){q.push(t->left);}
                if(t->right){q.push(t->right);}
            }
            res.push_back(level);
            index++;
        }
        return res;
    }
};
