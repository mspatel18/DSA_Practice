#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string, int> m;
    int q,y,tp;
    string x;
    
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>tp;
        if(tp==1){
            cin>>x>>y;        
        if(m[x]){
            m[x] = m[x] +y;
        }else{
            m[x]=y;
        }
        
        }else if(tp==2){
            cin>>x;
            m.erase(x);
        }else if(tp ==3){
            cin>>x;
            cout<<m[x]<<endl;
        }
        
    }
    return 0;
}
