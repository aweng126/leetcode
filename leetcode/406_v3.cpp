//
//  406_v3.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/11.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return (a[0] > b[0] ||(a[0]==b[0] && a[1] < b[1]));
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),cmp);
        
        vector< vector<int> > ans;
        for(int i = 0; i < people.size(); i++ ){
            auto p = people[i];
            ans.insert(ans.begin()+p[1],p);
        }
        return ans;
    }
};
