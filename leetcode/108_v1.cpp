//
//  108_v1.cpp
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return ToBST(nums,0,nums.size()-1);
    }
    TreeNode* ToBST(vector<int>& nums,int l,int r){
        if(l>r) return NULL;
        int mid = l+(r-l)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = ToBST(nums,l,mid-1);
        root ->right = ToBST(nums,mid+1,r);
        return root;
    }
};
