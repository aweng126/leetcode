//
//  99_v1.cpp
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
    void recoverTree(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* p = root;
        vector<int> arr;
        TreeNode* first= NULL,*second = NULL,*pre = NULL;
        while(p || !s.empty()){
            while(p){
                s.push(p);
                p=p->left;
            }
            p=s.top(); s.pop();
            if(pre && pre->val >= p->val){
                if(!first){
                    first = pre;
                }
                    second = p;
            }
            pre = p;
            p = p->right;
        }
        swap(first->val, second->val);
    }
};
