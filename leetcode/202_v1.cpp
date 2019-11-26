//
//  202_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/23.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> arr;
    bool isHappy(int n) {
        int a = 0;
        while(n/10){
            a+= pow(n%10,2);
            n = n/10;
        }
        a += n*n;
        if(a == 1) return true;
        else if(find(arr.begin(),arr.end(),a) != arr.end()) return false;
        else{
            arr.push_back(a);
            return isHappy(a);
        }
    }
};
