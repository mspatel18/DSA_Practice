#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int x,q,y;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        if(x==1){
            s.insert(y);
        }else if(x==2){
            s.erase(y);
        }else if(x==3){
            set<int>::iterator itr=s.find(y);
            if(itr == s.end()){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
// The above problem can be also be solved by switch case switch(x)
