#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSDN(int num){
        int n = num;
        while(n){
            if(!(n % 10)||num % (n % 10)) 
                return false;
            n /= 10;
        }
        return true;
        // string str = to_string(n);
        // for(int i=0;i<str.length();i++){
        //     if(n%(int)str[i]!=0){
        //         cout<<str[i]<<" ";
        //         return false;
        //         break;                
        //     }
        // }
        // return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(isSDN(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};