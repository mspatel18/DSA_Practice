#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,x,r,r1,r2;
    cin>>n; 
    vector<int> v;
    //input el
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }//1 4 6 2 8 9
    cin>>r;//position at which el is to be removed
    v.erase(v.begin()+r-1);//
    cin>>r1>>r2;//range
    v.erase(v.begin()+r1-1,v.begin()+r2-1);
    //output
    cout<<v.size()<<endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}