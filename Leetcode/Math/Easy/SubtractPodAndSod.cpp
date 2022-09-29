#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int pod = 1;
        int sod = 0;
        while(n){
            pod*=n%10;
            sod+=n%10;
            n=n/10;
        }
        return pod - sod;
    }
};