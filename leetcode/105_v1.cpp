//
//  105_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/27.
//  Copyright © 2019 李庆文. All rights reserved.
//  前序遍历和中序遍历构造树

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return BTree(preorder,0,inorder,0,inorder.size()-1);
    }
    TreeNode* BTree(vector<int>& porder,int pstart,vector<int>& iorder,int istart,int iend){
        if(iend<istart) return NULL;
        int val = porder[pstart];
        TreeNode* root = new TreeNode(val);
        auto a = find(iorder.begin(),iorder.end(),val);
        int index = distance(iorder.begin(),a);
        int size = index - istart;
        
        root->left = BTree(porder,pstart+1,iorder,istart,index-1);
        root->right = BTree(porder,pstart+1+size,iorder,index+1,iend);
        return root;
    }
};
