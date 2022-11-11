#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo=0;
        int mid=0;
        int hi=nums.size()-1;
        while(mid<=hi){
            switch(nums[mid]){
                case 0:
                    swap(nums[lo++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
            }
        }
    }
};