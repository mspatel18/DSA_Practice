//Sample Input

// 5
// 1 6 10 8 4
// Sample Output

// 1 4 6 8 10

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,x;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (auto it4 : v)
    {
        cout << it4 << " ";
    }
    return 0;
}