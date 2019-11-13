//
//  861_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/13.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();
        int res = m*(1<<(n-1));
        int cnt = 0;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m;j++){
                 cnt += (A[j][0]==A[j][i]);
            }
            res += max(cnt,m-cnt)*(1<<(n-1-i));
            cnt = 0;
        }
        return res;
    }
};
