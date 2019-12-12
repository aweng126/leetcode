//
//  336_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isValid(string s,int l,int r){
        while(l<r){
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> res;
        unordered_map<string,int> umap;
        set<int> s;
        
        for(int i = 0; i< words.size();i++){
            umap[words[i]] = i;
            s.insert(words[i].size());
        }
        
        for(int i = 0;i<words.size();i++){
            string t = words[i];
            reverse(t.begin(),t.end());
            if(umap.count(t) && umap[t]!=i){
                res.push_back({i,umap[t]});
            }
               
            int len = t.size();
            auto b = s.find(len);
            for(auto a = s.begin(); a != b; ++a){
                int d = *a;
                if(isValid(t,0,len-d-1) && umap.count(t.substr(len-d))){
                    res.push_back({i,umap[t.substr(len-d,len-1)]});
                }
                if(isValid(t,d,len-1) && umap.count(t.substr(0,d))){
                    res.push_back({umap[t.substr(0,d)],i});
                }
            }
            
        }
        
        return res;
    }
};
