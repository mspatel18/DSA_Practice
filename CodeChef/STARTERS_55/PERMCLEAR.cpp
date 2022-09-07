// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	for (int i = 0; i < t; i++) {
// 	    /* code */
// 	    int n;
// 	    std::vector<int> A;
// 	    cin>>n;
// 	    //input
// 	    for (int j = 0; j < n; j++) {
// 	        int temp;
// 	        cin>>temp;
// 	        A.push_back(temp);
// 	    }
// 	    int rem_no;
// 	    cin>>rem_no;
// 	    std::vector<int> B;
// 	    for (int j = 0; j < n; j++) {
// 	        int temp;
// 	        cin>>temp;
// 	        B.push_back(temp);
// 	    }
// 	    for (int j = 0; j < B.size(); j++) {
// 	        std::vector<int>::iterator it;
// 	        it =std::remove(A.begin(),A.end(),B[j]);
// 	       // A.erase(A.begin()+it);
// 	    }
// 	    //output
// 	    for (auto it4 : A)
//     {
//         cout << it4 << " ";
//     }
//     cout<<endl;
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int k; cin>>k;
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
            int x; cin>>x;
            mp[x]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==0){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}