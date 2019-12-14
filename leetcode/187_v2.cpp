//
//  187_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/14.
//  Copyright © 2019 李庆文. All rights reserved.
//  依旧超时了，用例通过29/32

#include <stdio.h>
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> mset;
        unordered_set<string> uset;
        for(int i = 0;i<s.size();i++){
            for(int j = i;j<s.size();j+=1){
                 string key = s.substr(j,10);
                 if(uset.count(key)){
                     mset.insert(key);
                 }else{
                     uset.insert(key);
                 }
            }
            uset.erase(uset.begin(),uset.end());
        }
        vector<string> res;
        for(auto a:mset){
            res.push_back(a);
        }
        return res;
    }
};
