//
//  406_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/11.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),
             [](vector<int>& a,vector<int>& b){
                 return ((a[0] > b[0]) ||(a[0] == b[0] && a[1] < b[1]));
             }
            );

        for(int i = 1; i < people.size(); i++ ){
            auto p = people[i];
            if(p[1] != i){
                people.erase(people.begin()+i);
                people.insert(people.begin() + p[1],p);
            }
        }
        return people;
    }
};
