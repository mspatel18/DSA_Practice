//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++
//Jay Umiya Ma
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sumN = (n*(n+1))/2;
        int sumA=0;
        for(int i=0;i<n-1;i++){
            sumA+=array[i];
        }
        return sumN-sumA;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends