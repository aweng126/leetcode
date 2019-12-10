//
//  389_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> umap;
        for(int i = 0; i < t.size(); i++){
            umap[t[i]]++;
        }
        for(int i = 0; i<s.size();i++){
            umap[s[i]]--;
        }
        for(auto a:umap){
            if(a.second){
                return a.first;
            }
        }
        return NULL;
    }
};
