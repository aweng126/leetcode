//
//  19FFlattening.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/10/19.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long LL;
const int maxn = 50;
LL pre[maxn], zeros[maxn], ones[maxn], minc[maxn], vis[maxn];

int main(){
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; ++t) {
        LL N, M;
        
        scanf("%lld %lld",&N, &M);
        
        for(int i = 0;i<maxn;i++){
              vis[i] = 0;
          }
        
        for(int i = 0; i <N; i++){
            LL temp;
            scanf("%lld", &temp);
            for(int j = maxn - 1; j >= 0; j--){
                if((temp>>j)&1){
                    vis[j]++;
                }
            }
        }

        for(int i = maxn-1; i >= 0; i--){
            LL a = vis[i] * (1LL<<i);
            LL b = (N-vis[i]) * (1LL<<i);
            ones[i] = a;
            zeros[i] = b;
            minc[i] = min(a,b);
        }

        pre[0] = 0;
        for(int i = 1;i < maxn; i++){
            pre[i] = pre[i-1]+minc[i-1];
        }

        LL res = 0;
        LL temp = 0;
        for(LL i = maxn - 1; i >=0; i--){
            if((zeros[i]+temp+pre[i])<=M){
                temp += zeros[i];
                res += (1LL<<i);
            }else if(temp+ones[i]+pre[i]<=M){
                temp += ones[i];
            }else{
                res = -1;
                break;
            }
        }
        printf("Case #%d: %lld \n", t, res);
    }
    return 0;
}
