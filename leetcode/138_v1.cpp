//
//  138_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//  仅仅超越10%的人。

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
       if(!head) return NULL;
       unordered_map<Node*,Node*> umap;
       Node* root = new Node(head->val,NULL,NULL);
       umap[head] = root;
       Node* p = head;
       while(p->next){
           Node* node = new Node(p->next->val,NULL,NULL);
           umap[p->next] = node;
           umap[p]->next = node;
           p = p->next;
       }
       Node* q = head;
       while(q){
           umap[q]->random = umap[q->random];
           q = q->next;
       }
       return root;
    }
};
