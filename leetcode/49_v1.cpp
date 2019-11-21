//
//  49_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/21.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,int> m;
       vector<vector<string>> res;
       for(string str:strs){
           string s = str;
           sort(s.begin(),s.end());
           if(!m.count(s)){
               m[s] = res.size();
               res.push_back({});
           }
           res[m[s]].push_back(str);
       }
        return res;
    }
};
