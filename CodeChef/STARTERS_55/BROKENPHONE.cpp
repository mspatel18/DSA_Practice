// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	long long t;
// 	cin>>t;
// 	if(t>=1 && t<=1000){
	    
// 	for (long long i = 0; i < t; i++) {
// 	    long long x,y;
// 	    cin>>x>>y;
// 	    if(x>y){
// 	        cout<<"REPAIR"<<endl;
// 	    }else if(y>x){
// 	        cout<<"NEW PHONE"<<endl;
// 	    }else if(x==y){
// 	        cout<<"ANY"<<endl;
// 	    }
// 	}
// 	}
// 	return 0;
// }
#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    long long x,y;
	    cin >> x >> y;
	    if(x==y)
	    {
	        cout << "ANY" << endl;
	    }
	    else if(x>y)
	    {
	        cout << "NEW PHONE" << endl;
	    }
	    else
	    {
	        cout << "REPAIR" << endl;
	    }
	}
	return 0;
}
