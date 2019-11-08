//
//  316_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/4.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string removeDuplicateLetters(string s) {
        int len = s.size();
        vector<int> count(26,0);
        for(int i = 0;i<len;i++){
            count[s[i]-'a']++;
        }
        
        vector<bool> visited(26,0);
   
        string res ="";
        for(auto c : s){
            auto index = c-'a';
            count[index]--;
            if(visited[index]) continue;
            while(res.size() > 0 && c < res.back() && count[res.back()-'a']>0 ){
                visited[res.back()-'a'] = 0;
                res.pop_back();
            }
            res += c;
            visited[index] = true;
        }
        return res;
    }
};
