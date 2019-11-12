//
//  435_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        sort(intervals.begin(), intervals.end());
       
        int res = 0;
        vector<int> temp;
        for(auto p : intervals){
            if( temp.empty() || p[0] >= temp[1]){
                temp = p;
            }else{
                res++;
                temp = p[1] < temp[1]? p:temp;
            }
        }
        return res;
    }
};
