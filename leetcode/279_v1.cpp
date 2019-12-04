//
//  279_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/4.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int numSquares(int n) {
        queue<int> q{{n}};
        int res = 0;
        while(!q.empty()){
            for(int i = q.size(); i>0; i--){
                int n = q.front(); q.pop();
                double a = sqrt(n);
                if(a == int(a)) return res+1;
                for(int j = int(a); j > 0; j--){
                    q.push(n-j*j);
                }
            }
            res++;
        }
        return res;
    }
};
