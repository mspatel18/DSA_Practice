//struct is a way to combine multiple fields to represent a composite data structure, which further lays the foundation for Object Oriented Programming. 
//For example, we can store details related to a student in a struct consisting of his age (int), first_name (string), last_name (string) and standard (int).
//Input will consist of four lines.
// The first line will contain an integer, representing age.
// The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
// The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
// The fourth line will contain an integer, representing the standard of student.

#include <bits/stdc++.h>
using namespace std;

struct strc { //creates structure
    int value1;
    string value2;
    string value3;
    int val4;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    strc Student;
    cin>>Student.value1;//access
    cin>>Student.value2;
    cin>>Student.value3;
    cin>>Student.val4;
    cout<<Student.value1<<" "<<Student.value2<<" "<<Student.value3<<" "<<Student.val4;
    return 0;
}
