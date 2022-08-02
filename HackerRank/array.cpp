#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    // int arr[n];
    vector<int> arr;
    
    //swap
    // int j=n;
    int temp =n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int a;
    while(n--){
        cin>>a;
        arr.push_back(a);
    }
    reverse(arr.begin(),arr.end());
    // for(int i=0;i<n/2;i++){
    //     // if(i!=j && i<=j){
    //         temp = arr[i];
    //         arr[i]=arr[j];
    //         arr[j]=temp;
    //         j--;
    //     // }
    // }
    
    for(int i=0;i<temp;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
