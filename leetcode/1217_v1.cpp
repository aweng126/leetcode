//
//  1217_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int a = 0;
        int b = 0;
        for(int i : chips){
            if(i%2==0){
                a++;
            }else{
                b++;
            }
        }
        return min(a,b);
    }
};
