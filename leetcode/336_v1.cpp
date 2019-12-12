//
//  336_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/12.
//  Copyright © 2019 李庆文. All rights reserved.
//  暴力求解，毫无意外，超时了。

#include <stdio.h>
class Solution {
public:
    bool isPalindrome(string s){
        int l = 0,r=s.size()-1;
        while(l<r){
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> res;
        for(int i = 0;i<words.size();i++){
            for(int j = i+1;j<words.size();j++){
                if(isPalindrome(words[i]+words[j])) {
                    res.push_back({i,j});
                }
                if(isPalindrome(words[j]+words[i])) {
                    res.push_back({j,i});
                }
            }
        }
        // cout<<isPalindrome("abcba")<<endl;
        return res;
    }
};
