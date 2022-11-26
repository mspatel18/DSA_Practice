#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=*max_element(candies.begin(),candies.end())){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};