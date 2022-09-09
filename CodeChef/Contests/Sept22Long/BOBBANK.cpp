#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long T;
	cin>>T;
	for (long long i = 0; i < T; i++) {
	    long long w,x,y,z;
	    cin>>w>>x>>y>>z;
	    cout<<w+((x-y)*z)<<endl;
	}
	return 0;
}
