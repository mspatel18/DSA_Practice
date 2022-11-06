#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,maxi=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    Solution s;
    cout<<s.findMaxConsecutiveOnes(nums);
    return 0;
}