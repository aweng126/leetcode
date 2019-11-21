//
//  49_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> res;
        
       if(strs.size() == 0){
           return res;
       }
        
       unordered_map<string,vector<string>> mp;
        
       for(auto s: strs){
           string value = s;
           sort(s.begin(),s.end());
           mp[s].push_back(value);
       }
        
       for(const auto& e:mp){
           res.push_back(e.second);
       }
        
        return res;
        
    }
};
