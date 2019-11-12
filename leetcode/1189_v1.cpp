//
//  1189_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> arr(26,0);
        for(char c:text){
            arr[c-'a']++;
        }
        // for(int a :arr){
        //     cout<<a<<endl;
        // }
        int res = 0;
        while(arr['a'-'a']>=1 && arr['b'-'a']>=1 &&arr['l'-'a']>=2 && arr['o'-'a']>=2 &&arr['n'-'a']>=1){
            res++;
            arr['a'-'a']--;
            arr['b'-'a']--;
            arr['l'-'a'] -= 2;
            arr['o'-'a'] -= 2;
            arr['n'-'a'] --;
        }
        return res;
    }
};
