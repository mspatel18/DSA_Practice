#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i = 0; i < t; i++) {
	    /* code */
	    int temperature;
	    cin>>temperature;
	    if(temperature>=94 && temperature<=103){
	        if(temperature>98){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    }
	    
	}
	return 0;
}
