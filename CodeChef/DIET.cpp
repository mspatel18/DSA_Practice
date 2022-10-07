#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    cin>>n>>k;
        int a[i];
	    int flag=1;
	    for (int j = 0; j < n; j++) {
	        cin>>a[j];
	    }
	    int total=0;
	    for (int j = 0; j < n; j++) {
	        total+=a[j];
	        if(a[j]<k){
	            cout<<"NO "<<k-a[j]<<endl;
	            break;
	        }
	        else{
	            total+=k-a[j];
	            flag++;
	        }
	    }
	    if(flag==n){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}