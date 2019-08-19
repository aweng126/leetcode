//
//  4_array_v2.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/8/19.
//  Copyright © 2019 李庆文. All rights reserved.
//  思路：合并两个有序数组，然后取中位数即可。
//

#include <stdio.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int len1 = nums1.size();
        int len2 = nums2.size();
        
        int l1=0,l2=0,l3=0;
        vector<int> nums(len1+len2,0);
        while(l1!=len1 && l2!=len2){
            if(nums1[l1]>=nums2[l2]){
                nums[l3]=nums2[l2];
                l2++;
            }else{
                nums[l3]=nums1[l1];
                l1++;
            }
            l3++;
        }
        
        
        if(l1==len1 && l2!=len2){
            for(int k=l2;k<len2;k++){
                nums[l3]=nums2[k];
                l3++;
            }
        }
        
        if(l2==len2 && l1!=len1){
            for(int k=l1;k<len1;k++){
                nums[l3]=nums1[k];
                l3++;
            }
        }
        
        //         cout<<"len: "<<nums.size()<<endl;
        
        //         for(int i=0;i<nums.size();i++){
        //             cout<<nums[i]<<endl;
        //         }
        
        
        int len = nums.size();
        
        if( len %2==1){
            return (double)nums[len/2];
        }else{
            return (double)(nums[len/2]+nums[len/2-1])/2;
        }
        
        
    }
};
