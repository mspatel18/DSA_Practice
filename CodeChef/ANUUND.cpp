#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2!=0){
        for (int i = 1; i < n; i++) {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i++;
        }
    }
    else{
        for (int i = 1; i < n-1; i++) {
            /* code */
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
