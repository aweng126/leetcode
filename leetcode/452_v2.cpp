//
//  452_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty()) return 0;
        sort(points.begin(), points.end(),[](vector<int>& a,vector<int>& b){
            return (a[1] < b[1]);
        });
        int res = 1;
        int end = points[0][1];
        for(int i = 1; i <  points.size(); i++){
            if(points[i][0] > end){
                res++;
                end = points[i][1];
            }
        }
        return res;
    }
};
