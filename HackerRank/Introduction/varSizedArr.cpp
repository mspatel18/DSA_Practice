#include <bits.stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,q;
    cin>>n>>q;
    int arr[n][k];
    for(int i=0;i<n;i++)
    {
        cin>>k; 
        for(int j=0;j<k; j++){ 
            cin>>arr[i][j];

        }

    }
    int m,l;
    for(int i=0;i<q;i++)
    {
        cin>>m>>l;
        cout<<arr[m][l]<<endl;
    }
    return 0;
}
