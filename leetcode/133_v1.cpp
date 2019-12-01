//
//  133_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        queue<Node*> q{{node}};
        unordered_map<Node*,Node*> umap;
        Node* res = new Node(node->val);
        umap[node] = res;
        while(!q.empty()){
            Node* t = q.front();q.pop();
            for(Node *a:t->neighbors){
                if(!umap.count(a)){
                    umap[a] = new Node(a->val);
                    q.push(a);
                }
                umap[t]->neighbors.push_back(umap[a]);
            }
        }
        return res;
    }
};
