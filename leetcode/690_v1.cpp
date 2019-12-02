//
//  690_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/2.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*> umap;
        for(Employee* a:employees){
            umap[a->id] = a;
        }
        
        queue<int> q{{id}};
        int res = 0;
        while(!q.empty()){
            auto a = q.front(); q.pop();
            res += umap[a]->importance;
            for(auto b:umap[a]->subordinates){
                q.push(b);
            }
        }
        return res;
    }
};
