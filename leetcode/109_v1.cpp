//
//  109_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/27.
//  Copyright © 2019 李庆文. All rights reserved.
//  将这个问题转化为108问题即可

#include <stdio.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> arr;
        ListNode* lst = head;
        while(lst){
            arr.push_back(lst->val);
            lst = lst->next;
        }
        return ToBST(arr,0,arr.size()-1);
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
