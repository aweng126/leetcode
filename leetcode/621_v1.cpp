//
//  621_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mcount;
        for(char task : tasks){
            mcount[task]++;
        }
        int mmax = 0;
        for(auto a : mcount){
            mmax = max(mmax,a.second);
        }
        int p = 0;
        int num2 = 0;
        for(auto a:mcount){
            num2 += a.second;
            if(a.second == mmax){
                p++;
            }
        }
        int num1 = p + (mmax-1) * (n+1);
        // cout<<mmax<<'\t'<<n<<'\t'<<num1<<'\t'<<num2;
        return max(num1,num2);
        
    }
};
