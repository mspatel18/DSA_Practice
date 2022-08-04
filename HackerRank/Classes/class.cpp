//Classes in C++ are user defined types declared with keyword class that has data and functions . 
//Although classes and structures have the same type of functionality, there are some basic differences. 
//The data members of a class are private by default and the members of a structure are public by default. 
//Along with storing multiple data in a common block, it also assigns some functions (known as methods) to manipulate/access them. 
//It serves as the building block of Object Oriented Programming.

#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        int age,std;
        string first_name;
        string last_name;
    public:
        
        void set() {
            cin>>age>>first_name>>last_name>>std;
        }
        void get() {
            cout<<age<<endl;
            cout<<last_name<<", "<<first_name<<endl;
            cout<<std<<endl<<endl;
            cout<<age<<','<<first_name<<','<<last_name<<','<<std;
        }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student s;
    s.set();
    s.get();
    return 0;
}
