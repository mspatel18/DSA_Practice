//Sample Input

// The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's  exam grades for this semester.

// 3
// 30 40 45 10 10
// 40 40 40 10 10
// 50 20 30 10 10
// Sample Output

// 1


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    int marks[5];
    int sum=0;
    public:
    void input(){
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    int calculateTotalScore(){
        for(int i=0;i<5;i++){
            sum = sum + marks[i];
        }
        return sum;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n,scr,scrK;
    int count = 0;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        s[i].input();
    }
    scrK = s[0].calculateTotalScore();
    for(int i=1;i<n;i++){
        scr = s[i].calculateTotalScore();
        if(scr > scrK){
            count++;
        }
    }
    cout<<count;
    return 0;
}
//Other approach can be by static member function
