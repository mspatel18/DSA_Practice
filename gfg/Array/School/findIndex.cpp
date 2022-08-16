//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        // vector<int>ans;
        // vector<int>v;
        // int first,last;
        // for(int i=0;i<n;i++){
        //     if(a[i]==key){
        //         ans.push_back(i);
        //     }
        // }
        // first = ans.begin();
        // last = ans.end()-1;
        // v.push_back(first);
        // v.push_back(last);
        // return v;
        vector <int>x;
        int f=-1,l=-1;
        for(int i=0;i<n;i++){
            if(key==a[i]){
                f=i;
                break;
            }
        }
        x.push_back(f);
        for(int i=n-1;i>=0;i--){
            if(key==a[i]){
                l=i;
                break;
            }
        }
        x.push_back(l);
        return x;
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends