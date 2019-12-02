//
//  429_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/2.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       
        queue<Node*> q{{root}};
        vector<vector<int>> res;
         if(!root) return res;
        
        while(!q.empty()){
            vector<int> onelevel;
            for(int i = q.size();i>0;--i){
                auto a = q.front();q.pop();
                onelevel.push_back(a->val);
                for(Node* child:a->children){
                    q.push(child);
                }
            }
            res.push_back(onelevel);
          }
       return res;
    }
};
