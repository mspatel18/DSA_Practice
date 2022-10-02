#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        // for(int i=0;i<s.length();i++){
        //     ans[i]='a';
        // }
        for(int i=0;i<ans.length();i++){
            // ans[i]=s[indices[i]]; //dont know why this won't work
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};