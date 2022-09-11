#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    long long a[n];
    unordered_map<long long,long long>mp;
    long long ans=0;
    for (long long i = 0; i < n ; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    for (auto it : mp) {
        if(it.second>1){
            long long f=it.second;
            ans+=f*(f-1)/2;
        }
    }
    cout<<ans<<endl;
    
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
