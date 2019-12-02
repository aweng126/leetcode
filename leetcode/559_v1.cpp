//
//  559_v1.cpp
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
    int maxDepth(Node* root) {
        if(!root) return 0;
        queue<Node*> q{{root}};
        int res = 0;
        while(!q.empty()){
            for(int i = q.size();i>0;--i){
                auto a = q.front();q.pop();
                for(Node* n:a->children){
                    q.push(n);
                }
            }
            ++res;
        }
        return res;
    }
};
