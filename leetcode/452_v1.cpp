//
//  452_v1.cpp
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
        sort(points.begin(), points.end());
        int res = 0;
        int end = -1;
        for(auto p:points){
            if( end == -1 || p[0] > end){
                res++;
                end = p[1];
            }else{
                end = min(end,p[1]);
            }
        }
        return res;
    }
};
