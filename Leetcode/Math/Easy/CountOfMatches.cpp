#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ans=0;
    int numberOfMatches(int n) {
        if(n==1){
            return ans;
        }
        else if(n%2==0){
            n/=2;
            ans+=n;
            numberOfMatches(n);
        }
        else{
            n=(n-1)/2;
            ans+=n;
            numberOfMatches(n+1);
        }
        return ans;
    }
};