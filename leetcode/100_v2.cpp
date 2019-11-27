//
//  100_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/27.
//  Copyright © 2019 李庆文. All rights reserved.
//  写法相比于第一版要精炼的多

#include <stdio.h>
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q) return q==p;
        return (p->val == q->val)&&isSameTree(p->left,q->left) &&isSameTree(p->right,q->right);
    }
};
