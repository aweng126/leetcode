//
//  127_v1.cpp
//  leetcode
//
//  Created by 李庆文 on 2019/11/28.
//  Copyright © 2019 李庆文. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordCount(wordList.begin(),wordList.end());
        if(!wordCount.count(endWord)) return 0;
        queue<string> q{{beginWord}};
        int res = 0;
        while(!q.empty()){
            for(int i = q.size();i>0;i--){
                string word = q.front();q.pop();
                if(word == endWord) return res+1;
                for(int j = 0;j<word.size();j++){
                    string newWord = word;
                    for(char k = 'a';k<='z';k++){
                        newWord[j] = k;
                        if(wordCount.count(newWord) &&newWord != word) {
                            q.push(newWord);
                            wordCount.erase(newWord);
                        }
                    }
                }
            }
            res++;
        }
        return 0;
    }
};
