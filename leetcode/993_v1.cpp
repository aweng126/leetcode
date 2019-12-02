//
//  993_v1.cpp
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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val == x || root->val ==y) return false;
        unordered_map<int,int> umap;
        queue<TreeNode*> q{{root}};
        bool findx = false,findy = false;
        while(!q.empty()){
            for(int i = q.size();i>0;--i){
                auto a = q.front();q.pop();
                if(a->val == x) findx = true;
                if(a->val == y) findy = true;
                if(a->left){
                    q.push(a->left);
                    umap[a->left->val] = a->val;
                }
                if(a->right){
                    q.push(a->right);
                    umap[a->right->val] = a->val;
                }
                if(findx && findy)  return umap[x] != umap[y];
            }
            findx = false; findy = false;
        }
        return false;

    }
};
