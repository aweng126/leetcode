//
//  44_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/17.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        if(m==0 && n==0){
            return true;
        }
 
        bool arr[m+1][n+1];
        memset(arr,0,sizeof arr);
        
        arr[0][0]=true;
                    
        
        for(int i =0;i<n;i++){
            if(p[i]=='*'){
                arr[0][i+1]=arr[0][i];
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(s[i]==p[j] || p[j]=='?'){
                    arr[i+1][j+1]=arr[i][j];
                }else if(p[j]=='*'){
                    arr[i+1][j+1]=arr[i][j+1]||arr[i+1][j];
                }
            }
        }
        
        return arr[m][n];
        
    }
};
