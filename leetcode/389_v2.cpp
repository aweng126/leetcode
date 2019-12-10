//
//  389_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<char> sarr(26,0);
        vector<char> tarr(26,0);
        for(int i = 0;i <s.size();i++){
            sarr[s[i]-'a']++;
            tarr[t[i]-'a']++;
        }
        tarr[t[s.size()] - 'a']++;
        
        for(int i = 0; i<26; i++){
            if(sarr[i] != tarr[i]){
                return i+'a';
            }
        }
        return NULL;
    }
};
