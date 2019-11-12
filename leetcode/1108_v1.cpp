//
//  1108_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string defangIPaddr(string address) {
        string res = "";
        for(int i = 0; i< address.size(); i++){
            if(address[i] == '.'){
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');
            }else{
                res.push_back(address[i]);
            }
        }
        return res;
            
    }
};
