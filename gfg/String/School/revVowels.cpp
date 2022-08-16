//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            //code here.;
            vector<int>ind;
            for(int i=0;i<s.length();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    ind.push_back(i);
                }
            }
            int j=ind.size()-1;

            for(int i=0;i<ind.size()/2;i++){
                char temp=s[ind[i]];
                s[ind[i]]=s[ind[j]];
                s[ind[j]]=temp;
                j--;
            }
            return s;
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends