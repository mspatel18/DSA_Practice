#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    /* code */
		cin>>n;
		int a[n],ans[n];
		cin>>k;
		//input
		for(int j=0;j<n;j++){
		    cin>>a[j];
		    if(a[j]<=k){
		        ans[j]=1;
				k=k-a[j];
		    }
		    else{
		        ans[j]=0;
		    }
		    
		}
		//output
		for (int i = 0; i < n; i++) {
		    cout<<ans[i];
		}
		cout<<endl;
		
	}
	return 0;
}
