//
//  326_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n && n%3 == 0){
            n = n/3;
        }
        return n==1;
    }
};
