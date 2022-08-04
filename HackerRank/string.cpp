//Input Format

// You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

// Output Format

// In the first line print two space-separated integers, representing the length of  and  respectively.
// In the second line print the string produced by concatenating  and  ().
// In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    //swap
    string temp ="a";
    temp[0] = a[0];
    a[0]=b[0];
    b[0]=temp[0];
    cout<<a<<" "<<b;
    return 0;
}