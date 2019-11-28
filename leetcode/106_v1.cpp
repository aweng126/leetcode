//
//  106_v1.cpp
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return BTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
    TreeNode* BTree(vector<int>& inorder,int instart,int inend,vector<int>& postorder,int poststart,int postend){
        if(instart>inend || poststart>postend) return NULL;
        int val = postorder[postend];
        TreeNode* root = new TreeNode(val);
        auto a = find(inorder.begin(),inorder.end(),val);
        int index = distance(inorder.begin(),a);
        int size = index -instart;
        root->left = BTree(inorder,instart,index-1,postorder,poststart,poststart+size-1);
        root->right = BTree(inorder,index+1,inend,postorder,poststart+size,postend-1);
        return root;
    }
};
