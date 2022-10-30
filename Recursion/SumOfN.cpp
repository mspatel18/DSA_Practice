#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    // int s=0;
    if(n<1){
        return n;
    }
    else
        return n+sum(n-1);
}
int main(){
    int n=5;
    // cin>>n;
    cout<<sum(n);
    return 0;
}