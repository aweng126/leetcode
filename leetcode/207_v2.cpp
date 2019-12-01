//
//  207_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses,vector<int>());
        vector<int> visit(numCourses);
        for(auto a:prerequisites){
            graph[a[1]].push_back(a[0]);
        }
        for(int i = 0; i < numCourses; ++i){
            if(!findSelf(graph,visit,i)) return false;
        }
        return true;
    }
    bool findSelf(vector<vector<int>>& graph,vector<int>& visit,int i){
        if(visit[i] == -1) return false;
        if(visit[i] == 1) return true;
        visit[i] = -1;
        for(auto a:graph[i]){
            if(!findSelf(graph,visit,a)) return false;
        }
        visit[i] = 1;
        return true;
    }
};
