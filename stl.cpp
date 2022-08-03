#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Pair
    pair<int, int> p = {1, 3};                                                                       // Pairs
    cout << "Pair<int,int>=" << p.first << " " << p.second << endl;                                  // prints 1 3
    pair<int, pair<int, int>> p1 = {1, {3, 4}};                                                      // club pair into pair
    cout << "Clubed pair " << p1.first << " " << p1.second.second << " " << p1.second.first << endl; // prints 1 4 3
    // pair array
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    // print 5
    cout << "pair array 2nd pair 1 el. " << arr[1].second << endl;

    // Vector
    // empty vector
    vector<int> v;              //{}
    v.push_back(1);             //{1}
    v.emplace_back(2);          //{1,2}
    vector<pair<int, int>> vec; // pair in vector
    // vec.push_back{{1,2}};
    // vec.emplace_back{1,2};

    // Vector of size 5 with everyone as 100
    vector<int> v3(5, 100); //{100,100,100,100,100}
    // A vector of size 5 initialized with 0 might take garbage value depend on the vector
    vector<int> v4(5);  //{0,0,0,0,0}
    vector<int> v5(v3); //{100,100,100,100,100} //inherit or copy of v3 to v5
    // vector iterator
    // take the vector to be {10,20,30,40}
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    vector<int>::iterator it = v1.begin();
    cout << "vector " << *(it) << " "; // prints 10 as it is in begining
    it++;
    cout << *(it) << " "; // prints 20 as it is the next el after 10
    //* is used to access the value at the iterator as 'it' points it.
    it = it + 2;
    cout << *(it) << " "; // prints 40

    vector<int>::iterator it1 = v1.end(); // points to memory add after 40
    // vector<int>::iterator it2 =v1.rend();
    // vector<int>::iterator it3 =v1.rbegin();

    cout << v1[0] << " " << v1.at(0); // another way to print vector
    cout << v.back() << " " << endl;  // last el

    // ways to print whole vector
    // 1
    for (vector<int>::iterator it2 = v1.begin(); it2 != v1.end(); it2++)
    {
        cout << *(it2) << " ";
    }
    cout << endl;
    // 2
    for (auto it3 = v1.begin(); it3 != v1.end(); it3++)
    {
        cout << *(it3) << " ";
    }
    cout << endl;
    // 3
    for (auto it4 : v1)
    {
        cout << it4 << " ";
    }
    cout << endl;

    // erase function

    v1.erase(v1.begin());                 //{20,30,40}
    v1.erase(v1.begin(), v1.begin() + 2); // erases a range [start,end) {40}

    // Insert function

    v1.insert(v1.begin(), 300);                      //{300,40}
    v1.insert(v1.begin() + 1, 2, 10);                //+ index,index,val {300,10,10,40}
    vector<int> copy(2, 50);                         //{50,50}
    v1.insert(v1.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,40}

    // size

    cout << "size of vector v1 is " << v1.size() << endl; // 6

    // erase last el

    v1.pop_back(); //{50,50,300,10,10}

    // swap

    // v5 -> {100,100,100,100,100}
    // v1 -> {50,50,300,10,10}
    v1.swap(v5); // both vector gets swaped
    v1.swap(v5);
    // clear

    v5.clear(); // erases the entire vector

    // boolean if vector is empty or not in 0 or 1

    cout << v5.empty() << endl; // 1 means true
    cout << v1.empty() << endl; // 0 means false
    for (auto it4 : v1)
    {
        cout << it4 << " ";
    }
    cout<<endl;
    // List

    list<int> ls;       // Prefer list whenever we want to insert el in the front
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2, 4)
    ls.push_front(5);   //{5, 2, 4);
    ls.emplace_front(); //{2, 4};
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    // Deque

    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2} given by deque
    dq.emplace_front(3); // {3, 4, 1, 2)
    dq.pop_back();       // {3, 4, 1} given by deque
    dq.pop_front();      //(4, 1)
    dq.back();
    dq.front();
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    //Stack

    cout<<"stack"<<endl;
    stack<int> st; //LAST IN FIRST OUT
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top(); // prints 5  it stays there  "** st[2] is invalid **"

	st.pop(); // st looks like {3, 3, 2, 1} //Removes the last inserted el


	cout << st.top(); // 3

	cout << st.size(); // 4

	cout << st.empty();

	stack<int>st1, st2;
	st1.swap(st2);
    cout<<endl;

    //Queue
    
    cout<<"queue"<<endl;
    queue<int> q;
	q.push(1); // {1}
	q.push(2); // {1, 2}
	q.emplace(4); // {1, 2, 4}

	q.back() += 5;//adds 5 to last el

	cout<<q.back(); // prints 9

	// Q is {1, 2, 9}
	cout << q.front(); // prints 1

	q.pop(); // {2, 9}

	cout << q.front(); // prints 2

	// size swap empty same as stack

    //Priority_queue
    return 0;
}