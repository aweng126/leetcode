//
//  187_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/14.
//  Copyright © 2019 李庆文. All rights reserved.
//  通过，超越67%人数

#include <stdio.h>
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> mset;
        unordered_set<string> uset;
        int index = s.size()-10;
        for(int i = 0;i<=index;i++){
             string key = s.substr(i,10);
                 if(uset.count(key)){
                     mset.insert(key);
                 }else{
                     uset.insert(key);
                 }
        }
        vector<string> res(mset.begin(),mset.end());
        return res;
    }
};
