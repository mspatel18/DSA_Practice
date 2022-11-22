#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int>v;
        for(int i=1;i<=max(a,b);i++){
            if(a%i==0 && b%i==0)
                v.push_back(i);
        }
        return v.size();
    }
};