//
//  63_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/15.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        long m = obstacleGrid.size();
        long n = obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 ||obstacleGrid[m-1][n-1]==1){
            return 0;
        }else if(m==1&&n==1&&obstacleGrid[0][0]==0){
            return 1;
        }else{
            long arr[m][n];
            for(int i = 0;i<m;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=0;
                }
            }

            for(int i=1;i<n;i++){
                if(obstacleGrid[0][i]==1){
                    break;
                }else{
                    arr[0][i]=1;
                }
            }

             for(int i=1;i<m;i++){
                if(obstacleGrid[i][0]==1){
                    break;
                }else{
                    arr[i][0]=1;
                }
            }

            for(int i =1;i<m;i++){
                for(int j=1;j<n;j++){
                    long left = obstacleGrid[i-1][j]?0:arr[i-1][j];
                    long up = obstacleGrid[i][j-1]?0:arr[i][j-1];
                    arr[i][j]=left+up;
                }
            }

            // for(int i = 0;i<m;i++){
            //     for(int j=0;j<n;j++){
            //         cout<<arr[i][j]<<'\t';
            //     }
            //     cout<<endl;
            // }
            return arr[m-1][n-1];
        }
    
    }
};
