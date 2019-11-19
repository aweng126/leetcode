//
//  970_v2.cpp
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
        for(int i = 0; pow(x,i)<= bound;i++){
            for(int j = 0; pow(x,i)+pow(y,j)<=bound; j++){
                reset.insert(pow(x,i)+pow(y,j));
                if(y == 1) break;
            }
            if(x == 1) break;
        }
        vector<int> res;
        for(auto a:reset){
            res.push_back(a);
        }
        return res;
    }
};
