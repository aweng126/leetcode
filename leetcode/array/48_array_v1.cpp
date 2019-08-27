//
//  48_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/27.
//  Copyright © 2019 李庆文. All rights reserved.
//  Runtime: 4 ms, faster than 81.88% of C++ online submissions for Rotate Image.
//   Memory Usage: 8.9 MB, less than 100.00% of C++ online submissions for Rotate Image.

#include <stdio.h>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
