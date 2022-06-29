#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << "Bharti" << endl;
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{

    print();

    int s = sum(1, 5);

    cout << s << endl;

    return 0;
}

// C++ stl is divided into four parts

/*
    Algorithms
    Containers -> map, vector
    Function
    Iterators
*/

// before learning containers, it is neseccary to learn about pair

// Pairs

void explainPair()
{

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    // cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

// vector

void explainVector()
{

    vector<int> v;

    // element push in vector
    v.push_back(1);
    // element push in vector (it is same as push_back but it is faster than push_back)
    v.emplace_back(2);

    // vector of pair
    vector<pair<int, int>> vec;

    // element push in pairs
    vec.push_back({1, 3});
    // element push in pairs
    vec.emplace_back(3, 4);

    // if we want to declare a vector with a specified size but with a value
    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}

    // if we want to declare a vector with a specified size but without value
    vector<int> v2(5); // vector's size is 5 with a 0 or garbage value -> {0, 0, 0, 0, 0}

    vector<int> v3(5, 20); // {20, 20, 20, 20, 20}
    // if we want to copy a vector inside some another vector
    vector<int> v4(v3); // it will be not same as vector v3 but it will be a copy of v3

    // How do you access the element in a vector
    // basicallly it is pointing to the memory address not to the element => v-> {20, 10, 15, 6, 7}
    // 20 in this case
    vector<int>::iterator it = v.begin();

    // it is shifting by one position to the element's address => v-> {20, 10, 15, 6, 7}
    // 10 in this case
    it++;

    // it is printing current iterator value => v-> {20, 10, 15, 6, 7}
    // 10 in this case
    cout << *(it) << " ";

    // it is shifting by 2 position form the current iterator's value => v-> {20, 10, 15, 6, 7}
    // 6 in this case
    it = it + 2;

    // it is printing current iterator value => v-> {20, 10, 15, 6, 7}
    // 6 in this case
    cout << *(it) << " ";

    // it will not point to the last element's address instead of it will point to the right after the last element's memory address.
    //  imagine this is the vector => v-> {10, 20, 30, 40}
    // in this case it will point the address og the element to the right after 40
    vector<int>::iterator it = v.end();
    // now if we do it-- then it will point to the 40

    // reverse end
    //  imagine this is the vector => v-> {10, 20, 30, 40}
    // it will point reverse of end
    // 10 in this case
    vector<int>::iterator it = v.rend();

    // reverse begin
    //  imagine this is the vector => v-> {10, 20, 30, 40}
    // it will point reverse of begin
    // 40 in this case
    vector<int>::iterator it = v.rbegin();
    // after this if we it++ then it will point to the 30

    // how to access the element
    //  imagine this is the vector => v-> {20, 10, 15, 6, 7}
    // it will point to the 1st element of the container(vector)
    // 20 in this case
    cout << v[0] << " " << v.at(0);

    // imagine this is the vector => v-> {10, 20, 30}
    // it will point to the 30
    cout << v.back() << " ";

    // If I want to print a entire vector
    //  imagine this is the vector => v-> {10, 20, 30}
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // If I want to print a entire vector in simpler fashion
    //  imagine this is the vector => v-> {10, 20, 30}
    // auto automatically assigns to the vector iterator
    // it also assigns the datatype automatically
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // the other way to printing vector is for each loop
    for (auto it : v)
    {
        cout << it << endl;
    }

    // imagine this is the vector => v-> {10, 20, 12, 23}
    // it will remove the address accordingly to given iterator's value
    // 20 in this case
    v.erase(v.begin() + 1);
    // after this the vector will be reshuffled => v-> {10, 12, 23}

    // imagine this is the vector => v-> {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} -> it will delete one position first for end deletion
    // [start, end)

    // Insert Function
    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin(), 300);       //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    // in this case
    // begin() + 1 is a position where we want to insert
    //  2 is  number of inserting elements ( How many times you want to insert)
    //  10 is a number (which number you want to insert)

    vector<int> copy(2, 50);                       //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    //{10, 20}
    v.pop_back(); //{10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2 -> (10, 20)

    v.clear();
    // erases the entire vector

    cout << v.empty();
    // if any value is present in the vector it will return false
    // if any value is not present in the vector it will return true
}

// List (Container)
/*****************List is same exactly the vector but only the difference is -> it gives front operation as well.*****************/
/*****************it is dynamic in nature.*****************/

void explainList()
{

    list<int> ls;

    ls.push_back(2); // 2

    ls.emplace_back(4); //{2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); //{2, 4}

    // rest function same as vector
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()
}

// Deque (Container)

void explainDeque()
{

    deque<int> dq;
    dq.push_back(1); // {1}

    dq.emplace_back(2); // {1, 2}

    dq.push_front(4); // {4, 1, 2}

    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();  // {3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back();

    dq.front();

    // rest function same as vector
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()
}

// Stack (Container)

void explainStack()
{

    stack<int> st;

    st.push(1);    //{1}
    st.push(2);    //{2, 1}
    st.push(3);    //{3, 2, 1}
    st.push(3);    //{3, 3, 2, 1}
    st.emplace(5); //{5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 " ** st[2] is invalid **"

    cout << st.pop(); // 3

    cout << st.size(); // 4

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);

    /**** Time complexoity = O(1)

    All things happens at constant time

    ****/
}

// Queue (Container)

void expianQueue()
{

    queue<int> q;

    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back();
    += 5
       // back means the last element (4 + 5 = 9)

       cout
       << q.back(); // prints 9

    // q is {1, 2, 9}

    cout << q.front(); // prints 1
    // delets the first in element

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

// Priority Queue (Container)

void explainPQ()
{

    // ***********************Also called as Maximum Heap************************//
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty function same as other data structure

    // ************************Also called as Minimum Heap************************//

    priority_queue<int, vector<int> greater<int>> pq;

    pq.push(5);     //{5}
    pq.push(2);     //{2, 5}
    pq.push(8);     //{2, 5, 8}
    pq.emplace(10); //{2, 5, 8, 10}

    cout << pq.top(); // prints 2

    /*** Time Complexity

    push() => O(log n)
    pop() => O(log n)
    top() => O(1)

    ***/
}

// Set (Container)
/*******************Stores everything in sorted order nd unique*******************/

void explainSet()
{

    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2); //{1, 2}
    st.insert(2);  //{1, 2}
    st.insert(4);  //{1, 2, 4}
    st.insert(3);  //{1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiently

    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as other data structure

    // imagine the set container is storing => {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // imagine the set container is storing => {1, 2, 3, 4, 5}
    auto it = st.find(6);
    // if elememt is not present in the comtainer then it will return after the end position means right after end

    //{1, 4, 5}
    st.erase(5); // erases 5 // takes logerithmic time

    int cnt = st.count(1);
    // if the element is present in the container then it will return 1 else it will return 0 because set is a unique container

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    // everything is happens in logerithmic time complexity
}

// MultiSet (Container)
/*******************It stores elements in sorted order but not unique*******************/
/*******************Meaning that Evertything is same as set but the only dfference is stores duplicate element also*******************/

void explainMultiSet()
{

    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest alk function same as set
}

// Unorderd (Container)

void explainUSet()
{

    unordered_set<int> st;
    // lower_bound() and upper_bound() function does not works, rest all functions are same
    // particular order it has a better complexity than set in the most cases, except some when collison happens.

    // all the operation happens O(1) constant time but in the worst case => O(N)
}

// Map (Container)
/********************Map Stores unique Keys in sorted order********************/

void explainMap()
{

    // Key, value
    map<int, int> mpp;

    // Key, pair_value
    map<int, pair<int, int>> mpp;

    // pair_key, value
    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2, 3}] = 10;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);
    // it points to the mpp.end() means after the map

    // erase, swap, size, empty are same as above
}

// Multimap (Container)

void explainMultimap()
{
    // everything same as map, only it can store multiple keys only mpp [key] cannot be used here.
}

// Unordered map (Container)

void explainUnorderdMap()
{

    // same as set and unordered_set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return false;
    }
    else if (p1.second == p2.second)
    {
        if (p1.first > p2.second)
            return true;
    }
    return false
}


// Algorithms

void explainExtra()
{

    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it accordingly to second element
    // if second element is same, then sort it accordingly to first element but in descending

    sort(a, a + n, comp);
    //{{4,1}, {2,1}, {1,2}};

    int num = 7;
    int cnt = __builtin_popcount();
    // shortcut for count set bits

    long long num = 165786578687;
    int cnt = __builtin_popcountll();
    // shortcut for count set bits

    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    int maxi = *max_element(a, a + n);
}

