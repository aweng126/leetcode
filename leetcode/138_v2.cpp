//
//  138_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node() {}

    Node(int _val, Node* _next, Node* _random) {
        val = _val;
        next = _next;
        random = _random;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*,Node*> umap;
        return copyRL(head,umap);
    }
    Node* copyRL(Node* node,unordered_map<Node*,Node*>& umap){
        if(node == NULL) return NULL;
        
        if(umap.find(node) != umap.end()){
            return umap[node];
        }
        
        Node* copy_node = new Node(node->val,NULL,NULL);
        umap[node] = copy_node;
        
        copy_node->next = copyRL(node->next,umap);
        copy_node->random = copyRL(node->random,umap);
        return copy_node;
        
    }
};
