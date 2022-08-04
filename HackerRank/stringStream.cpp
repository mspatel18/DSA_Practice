//stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. 

//stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here

// Operator >> Extracts formatted data.
// Operator << Inserts formatted data.
// Method str() Gets the contents of underlying string device object.
// Method str(string) Sets the contents of underlying string device object.
// Its header file is sstream.

// One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").

#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str;
    cin>>str;
    stringstream ss;
    ss<<str;
    char ch;
    int a;
    while (ss>>a) {
        cout<<a<<endl;
        ss>>ch;
    }
    return 0;
}
