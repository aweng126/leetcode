//
//  709_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string toLowerCase(string str) {
        string res = "";
        for(char a:str){
            if(a>=65 && a<=90){
                res.push_back(a+32);
            }else{
                res.push_back(a);
            }
        }
        return res;
    }
};
