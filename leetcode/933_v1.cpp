//
//  933_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/12/1.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class RecentCounter {
public:
    RecentCounter() {
        q = new queue<int>();
    }
    
    int ping(int t) {
        q->push(t);
        while(q->size()>0 && q->front()<(t-3000)){
            q->pop();
        }
        return q->size();
    }
private:
    queue<int> *q;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
