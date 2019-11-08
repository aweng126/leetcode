//
//  15_array_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
//   Runtime: 156 ms, faster than 18.93% of C++ online submissions for 3Sum.
//   Memory Usage: 26.4 MB, less than 7.06% of C++ online submissions for 3Sum.
//

//#include <stdio.h>
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> result;
//        map<vector<int>,int> mmap;
//        int len = nums.size();
//        if(len<3){return result;}
//        
//        sort(nums.begin(),nums.end());
//        
//        for(int i =0;i<len-2;i++){
//            if (i > 0 && (nums[i] == nums[i-1])) {
//                continue;
//            }
//            int k=i+1,j=len-1;
//            while(k<j){
//                if(nums[i]+nums[k]+nums[j]<0){
//                    k++;
//                }else if(nums[i]+nums[k]+nums[j]>0){
//                    j--;
//                }else{
//                    vector<int> var;
//                    var.push_back(nums[i]);
//                    var.push_back(nums[j]);
//                    var.push_back(nums[k]);
//                    mmap[var]=1;
//                    j--;
//                    k++;
//                }
//            }
//            
//        }
//        
//        for(auto t:mmap){
//            result.push_back(t.first);
//        }
//        return result;
//        
//    }
//};
