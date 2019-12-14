//
//  187_ v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/14.
//  Copyright © 2019 李庆文. All rights reserved.
//  非常不出意外的超时了，29/32

#include <stdio.h>
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> mset;
        unordered_map<string,int> mmap;
        for(int i = 0;i<s.size();i++){
            for(int j = i;j<s.size();j+=1){
                 string key = s.substr(j,10);
                 mmap[key]++;
            }
            for(auto a:mmap){
                if(a.second>1){
                    mset.insert(a.first);
                }
            }
            mmap.erase(mmap.begin(),mmap.end());
        }
        vector<string> res;
        for(auto a:mset){
            res.push_back(a);
        }
        return res;
    }
};
