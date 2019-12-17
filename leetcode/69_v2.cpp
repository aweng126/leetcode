//
//  69_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/17.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int left = 0,right = x,mid = 0;
        while(left < right){
            mid = left+(right-left)/2;
            if(x/mid >= mid) left = mid+1;
            else right = mid;
        }
        return right-1;
    }
};
