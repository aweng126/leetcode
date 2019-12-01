//
//  130_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    void solve(vector<vector<char>>& board) {
       if(board.size() == 0) return;
       int m = board.size(); int n = board[0].size();
       //first column
       for(int i = 0; i< m; i++){
           if(board[i][0] == 'O') DFS(board,i,0);
           if(board[i][n-1] == 'O') DFS(board,i,n-1);
       }
        for(int i = 0;i<n;i++){
            if(board[0][i] == 'O') DFS(board,0,i);
            if(board[m-1][i] == 'O') DFS(board,m-1,i);
        }
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(board[i][j]==1){
                    board[i][j] = 'O';
                }else if(board[i][j] =='O'){
                    board[i][j]='X';
                }
            }
        }
    }
    void DFS(vector<vector<char>>& board,int i,int j){
        board[i][j] = 1;
        if(i-1>0 && board[i-1][j] == 'O') DFS(board,i-1,j);
        if(i+1<board.size()&&board[i+1][j]=='O') DFS(board,i+1,j);
        if(j-1>0 && board[i][j-1] =='O') DFS(board,i,j-1);
        if(j+1<board[0].size() && board[i][j+1] =='O') DFS(board,i,j+1);
    }
};
