#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    int width;
    int height;
    
    void display(){
        cout<<width<<" "<<height<<endl;
    }
};
class RectangleArea : public Rectangle{
    public:
    void read_input(){
        cin>>width>>height;
    }
    void display(){
        cout<<width*height<<endl;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    RectangleArea ra;
    ra.read_input();
    ra.Rectangle::display();//it access the base class 
    ra.display();
    
    return 0;
}
