//
//  310_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/5.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n == 1) return {0};
        
        vector<vector<int>> graph(n);
        vector<int> hres;
        for(auto a:edges){
            graph[a[0]].push_back(a[1]);
            graph[a[1]].push_back(a[0]);
        }
        queue<int> q;
        for(int i = 0; i< n; i++){
            if(graph[i].size() == 1){
                q.push(i);
            }
        }
        
        while( n > 2 ){
            int size = q.size();
            n -= size;
            for(int i = 0;i<size;i++){
                int a  = q.front(); q.pop();
                for(int b: graph[a]){
                    auto index = find(graph[b].begin(),graph[b].end(),a);
                    graph[b].erase(index);
                    if(graph[b].size()==1) q.push(b);
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front());q.pop();
        }
    
        return res;
    }
};
