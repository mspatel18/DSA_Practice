//{ Driver Code Starts
#include<iostream>
#include<string>
using namespace std;

string conCat(string a , string b);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<conCat(a,b)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string conCat(string s1 , string s2)
{
    // code here.
    for(int i=0;i<s2.length();i++){
        s1+=s2[i];
    }
    return s1;
}
