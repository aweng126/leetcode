//
//  881_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int plen = people.size();
        vector<int> p(limit+1, 0);
        for(int i = 0; i< plen;i++){
            p[people[i]]++;
        }
        int res = p[limit];
        int single = limit/2+1;
        int small = 0;
        for(int i = limit-1; i>= single ; i--){
            res += p[i];
            small += p[limit-i];
            if(p[i] > small){
                small = 0;
            }else{
                small -= p[i];
            }
        }
        small += limit%2==0?p[limit/2]:0;
        int dou = small%2==0 ?small/2:small/2+1;
        return res+dou;
        
    }
};
