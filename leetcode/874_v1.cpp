//
//  874_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/18.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
       int res = 0;
       int x = 0, y = 0, curd = 0;
       unordered_set<string> obs;
       for(auto a:obstacles) {
           obs.insert(to_string(a[0])+"-"+to_string(a[1]));
        }
       vector<int> dx = {0,1,0,-1};
       vector<int> dy = {1,0,-1,0};
       for(int i :commands){
           if(i == -1){
               curd = (curd+1)%4;
           }else if(i == -2){
               curd  = (curd-1+4)%4;
           }else{
               while(i>0 && !obs.count(to_string(x+dx[curd])+"-"+to_string(y+dy[curd]))){
                   x += dx[curd];
                   y += dy[curd];
                   i--;
               }
           }
           res = max(res,x*x+y*y);
       }
       return res;
    }
};
