//
//  67_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/8.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size();
        int blen = b.size();
        int mlen = max(alen, blen);
        string res = "";
        int carry = 0;
        for(int i = 0; i < mlen; i++){
            int tempa = alen>i?a[alen-i-1]-'0':0;
            int tempb = blen>i?b[blen-i-1]-'0':0;
            int tres = tempa+tempb+carry;
            if(tres == 0){
                res.insert(0,1,'0');
                carry = 0;
            }else if(tres == 1){
                res.insert(0,1,'1');
                carry = 0;
            }else if(tres == 2){
                res.insert(0,1,'0');
                carry = 1;
            }else if(tres == 3){
                res.insert(0,1,'1');
                carry = 1;
            }
        }
        if(carry == 1){
            res.insert(0,1,'1');
        }
        return res;
    }
};
