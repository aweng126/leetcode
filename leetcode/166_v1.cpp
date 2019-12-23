//
//  166_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/23.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string fractionToDecimal(int mnumerator, int mdenominator) {
       long numerator = mnumerator;
       long denominator = mdenominator;
        
         string temp = "";
        if(numerator == 0) return "0";
         if(numerator < 0 && denominator<0 ){
             numerator *= -1;
            denominator *= -1;
         }else if(numerator < 0){
             numerator *= -1;
             temp.append("-");
         }else if(denominator < 0 ){
             denominator *= -1;
             temp.append("-");
         }
       
        long a = numerator/denominator;
        temp.append(to_string(a));
        
        long b = numerator%denominator;
        if(b != 0) temp.append(".");
        
        
        // 小数部分
        string temp1 = "";
        long cur = 0;
        unordered_map<int,char> mmap;
        int pos = 0;
        while(b != 0){
            if(mmap.count(b)){
                temp1.insert(mmap[b],1,'(');
                temp1.insert(temp1.end(),1,')');
                break;
            }
            cur = b*10/denominator;
            temp1.append(to_string(cur));
            mmap[b] = pos++;
            // cout<<"cur="<<cur<<endl;
            b = (b*10)%denominator;
        }
        return temp+temp1;
    }
};
