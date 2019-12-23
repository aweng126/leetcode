//
//  74_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/23.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0) return false;
        int i = 0,j = matrix[0].size()-1;
        while(i<matrix.size() && j>=0){
            if(matrix[i][j] == target){
                 return true;
            }else if(matrix[i][j]>target){
                j--;
            }else if(matrix[i][j] < target){
                i++;
            }
        }
        return false;
    }
};
