//
//  326_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n >1){
            if(n%3 != 0) return false;
            n = n/3;
        }
        return n==1;
    }
};
