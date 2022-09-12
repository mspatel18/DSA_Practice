//PUSH (S, TOP, X)
//  This procedure inserts an element x to the top of a stack which is represented by a vector S containing N
// elements with a pointer TOP denoting the top element in the stack.
// 1. [Check for stack overflow]
// If TOP ≥ N
// Then write (‘STACK OVERFLOW’)
// Return
// 2. [Increment TOP]
// TOP ←TOP + 1
// 3. [Insert Element]
// S[TOP] ←X
// 4. [Finished]
// Return


//POP (S, TOP)
//  This function removes the top element from a stack which is represented by a vector S and returns this
// element. TOP is a pointer to the top element of the stack.
//1. [Check for underflow of stack]
// If TOP = 0
// Then Write (‘STACK UNDERFLOW ON POP’)
//  Take action in response to underflow
// Return
// 2. [Decrement Pointer]
// TOP ← TOP – 1
// 3. [Return former top element of stack]
// Return (S[TOP + 1])


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};


int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        MyStack *sq = new MyStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends



//Function to push an integer into the stack.
void MyStack :: push(int x)
{
    // Your Code
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top==-1){
        return -1;
    }
     int ans = arr[top];
       top--;
       return ans;

}
