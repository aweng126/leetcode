//
//  134_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/30.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int len = gas.size();
        vector<int> starts;
        for(int i =0;i<len;i++){
            if(gas[i]-cost[i]>=0){
                starts.push_back(i);
            }
        }
        
        int station;
        int j = 0;
        
        for(int i = 0; i < starts.size(); i++){
            station = starts[i];
            int tank = gas[station]-cost[station];
            while(tank >= 0 && j<len ){
               station = (station+1)%len;
               tank = tank + gas[station] -cost[station];
               j++;
            }
            if(j == len){ return station;}
            j = 0;
        }
        return -1;
       
    }
};
