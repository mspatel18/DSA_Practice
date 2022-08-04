#include <iostream>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b && a>c && a>d){//Checking if a is greater than a than all
        max = a;
    }else if(b>c && b>d){//checking if b is greater
        max = b;
    }else if(c>d){//if c
        max = c;
    }else{//
        max = d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    //scanf("%d %d %d %d", &a, &b, &c, &d);
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
