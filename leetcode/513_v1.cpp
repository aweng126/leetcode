//
//  513_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/2.
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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q{{root}};
        vector<int> lastlevel;
        
        while(!q.empty()){
            vector<int> onelevel;
            for(int i = q.size();i>0;--i){
                auto a = q.front();q.pop();
                onelevel.push_back(a->val);
                if(a->left){q.push(a->left);}
                if(a->right){q.push(a->right);}
            }
            lastlevel = onelevel;
          }
       return lastlevel.front();
    }
};
