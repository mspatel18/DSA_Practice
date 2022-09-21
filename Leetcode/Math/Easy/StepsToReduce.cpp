#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count=0;
    int numberOfSteps(int num) {
        
        if(num==0){
            return count;
        }
        else if(num%2==0){
            count++;
            num/=2;
            numberOfSteps(num);
        }else{
            count++;
            num-=1;
            numberOfSteps(num);
        }
        return count;
    }
};