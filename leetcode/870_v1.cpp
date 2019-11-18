//
//  870_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/14.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include "870_v1.hpp"
class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        if(A.empty()) return A;
        int len = A.size();
        vector<int> res;
        vector<int> arr(len,0);
        sort(A.begin(),A.end());
        for(int i = 0; i < len; i++){
            for(int j = 0; j< len; j++){
                if(A[j]>B[i] && arr[j] == 0){
                    res.push_back(A[j]);
                    arr[j] = 1;
                    break;
                }
                if(j == len-1){
                    auto a = find(arr.begin(),arr.end(),0);
                    int index = distance(arr.begin(),a);
                    res.push_back(A[index]);
                    arr[index] = 1;
                }
            }
        }
        return res;
    }
};
