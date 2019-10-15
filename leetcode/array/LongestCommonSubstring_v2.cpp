//
//  LongestCommonSubstring_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/13.
//  Copyright © 2019 李庆文. All rights reserved.
//  最长公共子序列，子串不连续的。

#include <stdio.h>
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        int arr[m][n];
        memset(arr,0,sizeof arr);
        
        int res=0;
        //第一行
        arr[0][0]=text1[0]==text2[0]?1:0;
        for(int i =1;i<n;i++){
            if(text1[0]==text2[i]){
                arr[0][i]=1;
            }else{
                arr[0][i]=arr[0][i-1];
            }
        }
        
        //第一列
         for(int i =1;i<m;i++){
            if(text2[0]==text1[i]){
                arr[i][0]=1;
            }else{
                arr[i][0]=arr[i-1][0];
            }
        }
        
        //其他行和列
        for(int i = 1 ;i<m;i++){
            for(int j = 1;j<n;j++){
                if(text1[i]==text2[j]){
                    arr[i][j]=arr[i-1][j-1]+1;
                }else{
                     arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        //打印
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        return arr[m-1][n-1];
        
    }
};
