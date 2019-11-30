//
//  342_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isPowerOfFour(int num) {
       //  cout<<log(INT_MAX)/log(4)<<endl;  15.5
        for(int i = 0; i< 16;i++){
            if(pow(4,i) == num) return true;
        }
       return false;
    }
};
