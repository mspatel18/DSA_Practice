#include <bits/stdc++.h>

void update(int *a,int *b) {
    // Complete this function  
    int c;
    c=*a+*b;
    *b=*a-*b;
    *a=c;
    //   *a = *a + *b;
    //   *b = b-a;
    //   if(*a<0){
    //       *a = -*a;
    //     }
        if(*b<0){
            *b=-*b;
        }
        
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
