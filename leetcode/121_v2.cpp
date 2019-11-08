//
//  121_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/24.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
       int len = prices.size();
       if(len<2) return 0;
        
       int res = 0;
       int buy = prices[0];
       for(int i = 1; i < len ; i++){
           if(buy > prices[i]){
                buy = prices[i];
           }else{
                res = max(res,prices[i]-buy);
           }
       }
       return res;
    }
};
