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
    //PQ stores the inserted element in sorted order
    cout<<"PQ"<<endl; 
    priority_queue<int>pq;
	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}
	cout << pq.top(); // prints 10
	pq.pop(); // {8, 5, 2}
	cout << pq.top(); // prints 8

	// size swap empty function same as others

    // Minimum Heap
	priority_queue<int, vector<int>, greater<int>> pq1;
	pq1.push(5); // {5}
	pq1.push(2); // {2, 5}
	pq1.push(8); // {2, 5, 8}
	pq1.emplace(10); // {2, 5, 8, 10}

	cout << pq1.top(); // prints 2
    
    //Set

    //doesn't takes duplicate and inserts in sorted manne
    //cout<<"Set"<<endl;
    set<int>set;
    set.insert(1);//{1}
    set.emplace(2);//{1,2}
    set.insert(2);//{1,2}
    set.insert(4);//{1,2,4}
    set.insert(3);//{1,2,3,4}
    // Functionality of insert in vector
	// can be used also, that only increases
	// efficiency

	// begin(), end(), rbegin(), rend(), size(),
	// empty() and swap() are same as those of above
    // {1, 2, 3, 4, 5}
	auto ite = set.find(3);

	// {1, 2, 3, 4, 5}
	auto ite3 = set.find(6);

	// {1, 4, 5}
	set.erase(5); // erases 5 // takes logarithmic time


	int cnt = set.count(1); 


	auto ite6 = set.find(3);
	set.erase(ite6); // it takes constant time

	// {1, 2, 3, 4, 5}
	auto ite1 = set.find(2);
	auto ite2 = set.find(4);
	set.erase(ite1, ite2); // after erase {1, 4, 5} [first, last)

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax
	auto ite4 = set.lower_bound(2); 

	auto ite5 = set.upper_bound(3);

    //MultiSet

    //Everything same as set only stores duplicate element also

	multiset<int>ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // all 1's erased

	int cntms = ms.count(1); 

	// only a single one erased
	ms.erase(ms.find(1));


	//ms.erase(ms.find(1)+2);

	// rest all function same as set

    //Map

    cout<<"Map"<<endl;

    // {key, value}
	map<int, int> mpp;

	map<int, pair<int, int>> mpp;

	map< pair<int, int>, int> mpp;

	// key values can be anything

	mpp[1] = 2;
	mpp.emplace({3, 1});

	mpp.insert({2, 4});

	mpp[{2,3}] = 10; 

	{
		{1, 2},
		{2, 4},
		{3, 1}
	}

	for(auto itmpp : mpp) {
		cout << itmpp.first << " " << itmpp.second << endl; 
	}

	// same options for using iterators
	// as we did in vector for the insert function


	cout << mpp[1]; // prints 2
	cout << mpp[5]; // prints 0, since it does not exists


	auto itmpp1 = mpp.find(3); // points to the position where 3 is found
	cout << *(itmpp1).second; 

	auto itmpp2 = mpp.find(5); // points to the end of the map since 5 not there

	// lower_bound and upper_bound works exactly in the 
	// same way as explained in the other video 
    
    // This is the syntax
	auto itmpp3 = mpp.lower_bound(2); 

	auto itmpp4 = mpp.upper_bound(3); 

	// erase, swap, size, empty, are same as above 

    //MultiMap
    	// everything same as map, only it can store multiple keys
	// only mpp[key] cannot be used here 

    //UnorderedMap
    // same as set and unordered_Set difference. 

    //EXTRAS

    //sort
    sort(a+2, a+4); // [first, last) //sorts between any range

	sort(a, a+n, greater<int>); 
    
    pair<int,int> a[] = {{1,2}, {2, 1}, {4, 1}}; 

    // sort it according to second element 
    // if second element is same, then sort 
    // it according to first element but in descending 
    //     bool comp(pair<int,int>p1, pair<int,int>p2) {
    // 	if(p1.second < p2.second) {
    // 		return true; 
    // 	} else if(p1.second == p2.second){
    // 		if(p1.first>p2.second) return true; 
    // 	}
    // 	return false; 
    // }
	sort(a, a+n ,comp); 

	// {4,1}, {2, 1}, {1, 2}}; 


	int num = 7; // 111 
	int cnt = __builtin_popcount(); 

	long long num = 165786578687;
	int cnt = __builtin_popcountll();


	string s = "123"; 
    //dictonary order
	do {
		cout << s << endl; 
	} while(next_permutation(s.begin(), s.end())); 

	// 123
	// 132
	// 213
	// 231
	// 312
	// 321

	int maxi = *max_element(a,a+n); //max el
    return 0;
}
