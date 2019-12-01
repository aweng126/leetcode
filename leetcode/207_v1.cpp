//
//  207_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//  BFS 判断图中是否有环的问题。

#include <stdio.h>
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses,vector<int>());
        vector<int> in(numCourses,0);
        for(auto a:prerequisites){
            graph[a[1]].push_back(a[0]);
            in[a[0]]++;
        }
        
        queue<int> q;
        for(int i = 0;i<in.size();i++){
            if(in[i]==0) q.push(i);
        }
        
        while(!q.empty()){
            auto a = q.front(); q.pop();
            for(int b:graph[a]){
                --in[b];
                if(in[b]==0) q.push(b);
            }
        }
        
        for(int i:in){
            if(i!=0) return false;
        }
        return true;
    }
};
