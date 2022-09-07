#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    int n,k;
	    cin>>n>>k;
	    int s=k*(k+1)/2;
	    if(n>=s){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
