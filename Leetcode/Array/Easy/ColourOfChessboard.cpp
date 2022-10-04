#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool squareIsWhite(string coord) {
   /*if(coordinates[0]+coordinates[1]%2==0)
        	return 1;
        else
        	return 0;*/
        if(((coord[0] - 'a') + (coord[1] - '0')) % 2)
                return false;
                    return true;  
    }
};