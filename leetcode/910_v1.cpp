//
//  910_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
        if(A.empty() || A.size() == 1) return 0;
        sort(A.begin(), A.end());
        int n = A.size();
        int left = A[0]+K;
        int right = A[n-1]-K;
        int res = A[n-1]-A[0];
        for(int i = 0; i < n-1; i++){
            int hight = max(A[i]+K, right);
            int low = min(A[i+1]-K,left);
            res = min(res,hight-low);
        }
        return res;
    }
};
