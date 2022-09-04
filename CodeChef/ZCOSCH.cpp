#include <iostream>
using namespace std;
int HowMuchScholarship(int a){
    if(a>=1&&a<=50)
    return 100;
    else if(a>=51&&a<=100)
    return 50;
    else
    return 0;
}
int main() {
	// your code goes here
	int rank;
	cin>>rank;
	cout<<HowMuchScholarship(rank);
	return 0;
}
