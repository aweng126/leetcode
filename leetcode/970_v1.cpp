//
//  970_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> reset;
        for(int i = 0; i<1000;i++){
            if(pow(x,i) > bound) break;
            for(int j = 0; j<1000; j++){
                int temp = pow(x,i)+pow(y,j);
                if(temp <= bound){
                    reset.insert(temp);
                }else{
                    break;
                }
            }
        }
        vector<int> res;
        for(auto a:reset){
            res.push_back(a);
        }
        return res;
    }
};
