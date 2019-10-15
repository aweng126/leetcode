//
//  62_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==0 && n==0){
            return 0;
        }else if(m==1 or n==1){
            return 1;
        }else {
            return uniquePaths(m-1,n)+uniquePaths(m,n-1);
        }
    }
};
