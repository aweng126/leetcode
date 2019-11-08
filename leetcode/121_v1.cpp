//
//  121_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/24.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int res = 0;
       int len = prices.size();
       if(len<2) return 0;
       for(int i = 0; i < len ; i++){
           for(int j = i; j < len; j++){
               res = max(res,prices[j]-prices[i]);
           }
       }
       return res;
    }
};
