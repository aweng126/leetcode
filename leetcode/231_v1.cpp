//
//  231_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && !(n&(n-1));
    }
};
