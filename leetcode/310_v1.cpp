//
//  310_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/4.
//  Copyright © 2019 李庆文. All rights reserved.
//  最初的想法，但是超时了。

#include <stdio.h>
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> umap;
        vector<int> hres;
        // int n = edges.size();
        for(auto a:edges){
            umap[a[0]].push_back(a[1]);
            umap[a[1]].push_back(a[0]);
        }
        for(int i = 0;i<n;i++){
           queue<int> q{{i}};
           int temp = 0;
           while(!q.empty()){
                for(int i = q.size(); i>0; i--){
                    int a = q.front(); q.pop();
                    for(int b:umap[a]){
                        if(b!=a){ q.push(b); }
                    }
                }
               temp++;
            }
            hres[i] = temp;
        }
        vector<int> res;
        int min = *min_element(hres.begin(),hres.end());
        for(int i = 0;i<n;i++){
            if(hres[i] == min){
                res.push_back(i);
            }
        }
        return res;
    }
};
