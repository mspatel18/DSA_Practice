//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int>v;
        int max = INT_MIN;//cannot use intmax because it will store first el
        for(int i=n-1;i>=0;i--){
            if(max<=a[i]){
                max=a[i];
                v.push_back(max);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
        // int* it;
        // for(int i=0;i<n;i++){
        //     it=max_element(a+i,a+n);
        //     if (find(v.begin(), v.end(), *it) == v.end()) {
        //       //if *it is not there it will push 
        //       v.push_back(*it);
        //     }
        
        // }
        
        // vector<int>::iterator ip;
  
        // // Using std::unique
        // ip = std::unique(v.begin(), v.end());
        
        // // Resizing the vector so as to remove the undefined terms
        // v.resize(std::distance(v.begin(), ip));
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends