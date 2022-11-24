#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for(int i=0;i<items.size();i++){
            // for(int j=0;j<items[i].size();j++){
                if(ruleKey=="type"&&ruleValue==items[i][0])
                count++;
                else if(ruleKey=="color"&&ruleValue==items[i][1])
                count++;
                else if(ruleKey=="name"&&ruleValue==items[i][2])
                count++;
            // }
        }
        return count;
    }
};