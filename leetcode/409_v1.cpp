//
//  409_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/10.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mmap;
        for(char c:s){
            mmap[c]++;
        }
        bool hasodd = false;
        int res = 0;
        for(auto a:mmap){
            if(a.second%2==0){
                res += a.second;
            }else{
                hasodd = true;
                res += a.second-1;
            }
        }
        return hasodd?res+1:res;
        
    }
};
