//
//  342_v4.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && !(num&(num-1)) && (num & 0x55555555) ;
        // return num>0 && !(num&(num-1)) && (num & 0x55555555) == num;
    }
};
