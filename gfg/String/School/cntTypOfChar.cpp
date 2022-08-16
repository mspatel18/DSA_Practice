//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int>ans;
            int upp=0;
            int low=0;
            int spc=0;
            int num =0;
            for(int i=0;i<s.length();i++){
                if(s[i]>='A' && s[i]<='Z'){
                    upp++;
                }else if(s[i]>='a' && s[i]<='z'){
                    low++;
                }else if(s[i]>='0' && s[i]<='9'){
                    num++;
                }else{
                    spc++;
                }
            }
            ans.push_back(upp);
            ans.push_back(low);
            ans.push_back(num);
            ans.push_back(spc);
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends