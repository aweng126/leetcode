//
//  342_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && !(num&(num-1)) && (num-1)%3 == 0;
    }
};
