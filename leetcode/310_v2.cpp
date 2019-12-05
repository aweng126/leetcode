//
//  310_v2.cpp
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
        
        unordered_map<int,vector<int>> umap;
        vector<int> hres;
        for(auto a:edges){
            umap[a[0]].push_back(a[1]);
            umap[a[1]].push_back(a[0]);
        }
        queue<int> q;
        for(int i = 0; i< n; i++){
            if(umap[i].size() == 1){
                q.push(i);
            }
        }
        
        while( n > 2 ){
            int size = q.size();
            n -= size;
            for(int i = 0;i<size;i++){
                int a  = q.front(); q.pop();
                for(int b: umap[a]){
                    auto index = find(umap[b].begin(),umap[b].end(),a);
                    umap[b].erase(index);
                    if(umap[b].size()==1) q.push(b);
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
