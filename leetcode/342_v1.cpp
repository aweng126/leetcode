//
//  342_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 0) return false;
        if(num == 1) return true;
        while(num!=1){
            if(num%4 != 0 ) return false;
            num = num/4;
        }
        return true;
    }
};
