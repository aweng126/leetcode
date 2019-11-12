//
//  71_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/12.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> p;
        string s = "";
        while( !path.empty() && path !="/"){
               s = path.substr(0,path.find('/',1));
            cout<<"s= "<<s<<endl;
            if(s == "/.."){
                if(!p.empty()){ p.pop();}
            }else if(s != "/." && s != "/"){
                p.push(s);
            }
            if(path.find('/',1) == path.npos){
                path = "";
            }else{
                path = path.substr( path.find('/',1));
            }
            cout<<"path= "<<path<<endl;
        }
        string res="";
        while(!p.empty()){
            res.insert(0, p.top());
            p.pop();
        }
        return res.size()==0?"/":res;
    }
};
