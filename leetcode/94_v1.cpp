//
//  94_v1.cpp
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
        if(root && root->left){
            auto a = inorderTraversal(root->left);
            res.insert(res.end(),a.begin(),a.end());
        }
        
        if(root){
            res.push_back(root->val);
        }
      
        if(root && root->right){
           auto a = inorderTraversal(root->right);
            res.insert(res.end(),a.begin(),a.end());
        }
        return res;
    }
};
