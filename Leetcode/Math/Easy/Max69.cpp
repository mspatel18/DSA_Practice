#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximum69Number (int nums) {
        vector<int>possibles;
        string nums2 = to_string(nums);
        possibles.push_back(stoi(nums2));
        for(int i=0;i<nums2.length();i++){
            if(nums2[i]=='6'){
                nums2[i]='9';
                possibles.push_back(stoi(nums2));
                nums2[i]='6';
            }else{
                nums2[i]='6';
                possibles.push_back(stoi(nums2));
                nums2[i]='9';
            }
        }
        return *max_element(possibles.begin(), possibles.end());
    }
};
//to frequent type conversion