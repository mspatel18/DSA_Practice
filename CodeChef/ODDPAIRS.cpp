#include <iostream>
using namespace std;
void mdna(){
    long long n;
    cin>>n;
    cout<<(n*n/2)<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    mdna();
	}
	return 0;
}

// int main() {
// 	// your code goes here
// 	int t,n,count;
// 	cin>>t;
//     if(t>=1&&t<=100){
// 	for (int i = 0; i < t; i++) {
// 	    	cin>>n;
// 	   if(n==1)
// 	   {
// 	       cout<<0<<endl;
// 	   }
// 	   else if(n%2==1){
// 	       cout<<((n/2)+1)*(n/2)*2<<endl;
// 	   }
// 	   else{
// 	       cout<<(n/2)*(n/2)*2<<endl;
// 	   }
	   
// 	   //count=0;
// 	}
// }
	
// 	return 0;
// }
