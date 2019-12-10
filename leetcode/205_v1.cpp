//
//  205_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int slen = s.size();
        // int tlen = t.size();
        // if(slen != tlen) return false;
        unordered_map<char,char> smap;
        unordered_map<char,char> tmap;
        for(int i = 0; i < slen; i++){
            if(!smap.count(s[i]) && !tmap.count(t[i]) ){
                smap[s[i]] = t[i];
                tmap[t[i]] = s[i];
            }else if(smap.count(s[i]) && tmap.count(t[i]) && smap[s[i]] == t[i] && tmap[t[i]] == s[i]){
                
            }else{
                return false;
            }
        }
        return true;
    }
};
