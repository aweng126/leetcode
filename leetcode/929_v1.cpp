//
//  929_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        if(emails.empty()) return 0;
        unordered_set<string> unique;
        string local,domain;
        for(string email:emails){
            auto index = email.find('@');
            local = email.substr(0,index);
            domain = email.substr(index);
            if(local.find('+')){
                local = local.substr(0,local.find('+'));
            }
            local.erase(remove(local.begin(),local.end(),'.'),local.end());
            
            unique.insert(local+domain);
        }
        return unique.size();
    }
};
