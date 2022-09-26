#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int freq = 2*i;
            int val = 2*i+1;
            if(freq<nums.size() && val<nums.size()){
                freq=nums[freq];
                val=nums[val];
                while(freq--){
                    ans.push_back(val);
                }
            }
            
        }
        return ans;
    }
};