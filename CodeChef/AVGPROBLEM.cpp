#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(float(a+b)/2 >c){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
