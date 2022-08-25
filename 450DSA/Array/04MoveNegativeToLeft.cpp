//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        //first solution
        //swap one by one till end O(N^2)
        //second
        //making a new array storing values and changing original array
        int arr2[n];
        int j=0;
        //postive
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                arr2[j]=arr[i];
                j++;
            }
        }
        //negative
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr2[j]=arr[i];
                j++;
            }
        }
        //store
        for(int i=0;i<n;i++){
            arr[i]=arr2[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends