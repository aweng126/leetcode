//
//  32_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/17.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int res = 0;
        for( int i = 0; i < s.length(); i++){
            if (s[i] == '('){
                st.push(i);
            }else{
                st.pop();
                if (st.empty()){
                    st.push(i);
                }else{
                     res = max(res,i - st.top());
                }
            }
        }
        return res;
    }
};
