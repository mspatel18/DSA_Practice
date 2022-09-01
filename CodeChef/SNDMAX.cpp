#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	//input
	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < 3; j++) {
    	    cin>>arr[j];
    	}
    	sort(arr,arr+3);
    	cout<<arr[1]<<endl;
	}
	return 0;
}
