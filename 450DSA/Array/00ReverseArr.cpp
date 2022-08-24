#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int a=0;a<t;a++){
	    int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    //reverse
	    //first solution
	    int arr2[n];
	    for(int i=0;i<n;i++){
	        arr2[i]=arr[n-1-i];
	    }
	   //second solution
	   // for(int i=n-1;i>=0;i--){
	   //     cout<<arr[i];
	   // }
	   //third solution
	   //int temp=0;
	   // for(int i=0;i<(n/2);i++){
	   //     temp=arr[i];
	   //     arr[i]=arr[n-1-i];
	   //     arr[n-1-i]=temp;
	   // }
	    //print
	    for(int i=0;i<n;i++){
	        cout<<arr2[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}