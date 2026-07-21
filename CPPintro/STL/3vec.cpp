#include <bits/stdc++.h>

using namespace std;

void dynamicArr() {

    // creating an empty container 
    vector<int> v1;

    //inserts an element at the very end 
    v1.push_back(3);
    v1.emplace_back(2);

    // vector of a pair datatype
    vector<pair<int, int>>vec;

    // inserting in the values inside the vector pair
    vec.push_back({1, 2});
    vec.emplace_back(2, 3);

    // a container containing 5 instance of value 100 each
    vector<int>v1(5, 100);

    // a container of size 5 with 5 instances of 0/garbage value(depending upon the compiler)
    vector<int>v1(5);

    // a container of five instances of 20
    vector<int>v2(5, 20);
    //copyingg the values of v2  into v3
    vector<int>v3(v2);

    // even in case the size is predefined we can always use functions like pushback later on to increase its size 
    v3.push_back(1);



    // accessing the elements of the vector 
    // iterators
    // begin points at the memory location of the 0th idx of the given vector 
    vector<int>::iterator it = v3.begin();


    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    // points to the memory location that is rigght after the last element of a vector
    // use it-- to aceess the last element of the vector
    vector<int>::iterator it = v.end();

    // points at the memory location right before the 0th idx
    vector<int>::iterator it = v.rend();

    // rbegin will point at the memory location of the last element of the vector
    // incase of rbegin, incementing the it will make it point to the memory address preceding the address of the last element of the vector 
    // so incrementing works in reverse order incase .rbegin()
    vector<int>::iterator it = v.rbegin();


    cout << v[0] << " " << v.at[0];
    // prints the last element of the given vector 
    cout << v.back << " ";


    // printing the vector manual way 
    for(vector<int>::iterator it = v.begin(); it != v.end();  it++) {
        cout << *(it) << " ";
    }

    // just auto it 
    // auto automatically assigns the datatype to the variable 
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    // for each loop 
    // it on v 

    for(auto it : v) {
        cout << it << " ";
    }

    // deletion --erase function 
    // providing the address of the value we want to delete to the erase function 
    // deletes the exact one element whose address was given 

    v.erase(v.begin() + 1);

    // for deleting multiple elements 
    // .erase(start, end);
    // deletes the elements in b/w start and end 
    // start will be included and end will be exculded 
    // {10, 2o, 30, 40, 50, 60, 70}
    v.erase(v.begin() + 1, v.begin()+4);    // {10, 50, 60, 70}


    // insert function --insertion 

    vector<int> v(2, 100);  //stores two instances of 100 {100,100}'
    // inserts 300 at the 0th idx followed by the rest of the data 
    v.insert(v.begin(), 300);   //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 5);  //{300, 5, 5, 100, 100}

    // copying one vector into another
    vector<int> c(4, 50);   //{50, 50, 50, 50}\
    // again, .insert(memory location where you want to store, what you want to store(value))
    v.insert(v.begin(), c.begin(), c.begin());  //{50, 50, 50, 50, 300....}

    // numbher of elements in a vector
    cout << v.size();

    // pops out the last elemnt of a vector 
    v.pop_back();

    // v1 -> {10, 20} & v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30,40} & v2 -> {10,20}

    v.clear();   //erases the entire vector

    // if function returns true if the vector is empty or else returns false 
    cout << v.empty();

}

int main() {

    dynamicArr();

    return 0;

}