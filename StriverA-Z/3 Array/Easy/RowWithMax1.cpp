//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[j][i]==1){
                    return j;
                }
            }
        }
        return -1;
	   // vector<int>ans;
	   // for(int i=0;i<n;i++){
	   //     int sum=0;
	   //     for(int j=0;j<m;j++){
	   //         if(arr[i][j]==1)
	   //             sum++;
	   //     }
	   //     ans.push_back(sum);
	   // }
	   //// sort(ans.begin(),ans.end());
	   //// for (auto it : ans)
    // // {
    // //     cout << it << " ";
    // // }
    // // cout << endl;
	   // if((max_element(ans.begin(), ans.end()) - ans.begin())==0)
	   //     return -1;
	   // return max_element(ans.begin(), ans.end()) - ans.begin();//returns index of max element
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends