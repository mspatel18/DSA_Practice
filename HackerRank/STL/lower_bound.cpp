#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,x,q,y;
    vector<int> v;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>x;
        v.push_back(x);
    }  
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>y;
        auto it = lower_bound(v.begin(), v.end(), y);
        if(v[it - v.begin()]==y){
            cout<<"Yes "<<it - v.begin() + 1<<endl;
        }else{
            cout<<"No "<<it - v.begin() + 1<<endl;
        }
    // cout << "lower_bound for 6 at position "
    //      << (it - v.begin() + 1) << '\n';

    }
    
    // auto it = lower_bound(v.begin(), v.end(), 3);
    // cout << "lower_bound for 6 at position "
    //      << (it - v.begin() + 1) << '\n';
    return 0;
}
