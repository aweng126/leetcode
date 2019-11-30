//
//  326_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfThree(int n) {
        int num = log(INT_MAX)/log(3)+1;
        for(int i = 0;i<num;i++){
            if(pow(3,i) == n) return true;
        }
        return false;
    }
};
