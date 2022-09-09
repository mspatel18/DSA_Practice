#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    float a,x,b,y;
	    cin>>a>>x>>b>>y;
	    if((a/x) > (b/y))
	        cout<<"Alice"<<endl;
	    else if((a/x)<(b/y))
	        cout<<"Bob"<<endl;
	    else
	        cout<<"Equal"<<endl;
	}
	return 0;
}
