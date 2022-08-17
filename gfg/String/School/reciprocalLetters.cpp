//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        for(int i=0;i<S.length();i++){
            if(S[i]>='A'&&S[i]<='Z'){
                S[i]=155-S[i];
            }else if(S[i]>='a'&&S[i]<='z'){
                S[i]=219-S[i];
            }
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;
    }
	return 0;
}
// } Driver Code Ends