//
//  994_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/2.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(),n=grid[0].size();
        queue<vector<int>> q;
        for(int i = 0;i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int res = 0;
        while(q.size()!=0){
             for(int i = q.size();i>0;i--){
                 auto a = q.front();q.pop();
                 //上
                 if(a[0]>=1 && grid[a[0]-1][a[1]]==1){
                     q.push({a[0]-1,a[1]});
                     grid[a[0]-1][a[1]] = 2;
                 }
                 //下
                  if(a[0]<m-1 && grid[a[0]+1][a[1]]==1){
                     q.push({a[0]+1,a[1]});
                     grid[a[0]+1][a[1]] = 2;
                 }
                 //左
                 if(a[1]>=1 && grid[a[0]][a[1]-1]==1){
                     q.push({a[0],a[1]-1});
                     grid[a[0]][a[1]-1] = 2;
                 }
                 //右
                  if(a[1]<n-1 && grid[a[0]][a[1]+1]==1){
                     q.push({a[0],a[1]+1});
                     grid[a[0]][a[1]+1] = 2;
                 }
             }
            res++;
        }
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        return res==0?0:res-1;
    }
};
