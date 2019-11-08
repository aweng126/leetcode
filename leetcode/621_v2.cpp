//
//  621_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> arr(26,0) ;
        
        for(char task : tasks){
            arr[task-'A']++;
        }
        
        int mmax = *max_element(arr.begin(),arr.end());
        int p = count(arr.begin(),arr.end(),mmax);
        
        int num1 = p + (mmax-1) * (n+1);
        int num2 = accumulate(arr.begin(),arr.end(),0);
        
        return max(num1,num2);
        
    }
};
