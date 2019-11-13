//
//  765_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/13.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        if(row.size() <=  2) return 0;
        int res = 0;
        for(int i = 0; i < row.size(); i += 2){
            if(row[i]%2 == 0){
                if(row[i+1] == row[i]+1){
                    continue;
                }else{
                    res++;
                    auto a = find(row.begin(),row.end(),row[i]+1);
                    int index = distance(row.begin(),a);
                    row[index] = row[i+1];
                    row[i+1] = row[i]+1;
                    // for(int i:row) cout<<i<<'\t';
                }
            }else{
                if(row[i+1] == row[i]-1){
                    continue;
                }else{
                    res++;
                    auto a = find(row.begin(),row.end(),row[i]-1);
                    int index = distance(row.begin(),a);
                    row[index] = row[i+1];
                    row[i+1] = row[i]-1;
                    // for(int i:row) cout<<i<<'\t';
                }
            }
        }
        return res;
    }
};
