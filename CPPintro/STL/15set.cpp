#include <bits/stdc++.h>

using namespace std;

/*

Sets
stores everything in sorted order 
stores unique values 

in set eveything happens in a logarithmic time complexity 

funstionality of insert in vector 
can be used also, that only increases 
efficiency 

begin(), end(), rbegin(), rend(), size()
empty(), swap() are same as those of before 

*/

void eSet() {

    set<int> st;
    st.insert(5); // {5}
    st.insert(2); // {2, 5}
    st.insert(2); // {2, 5}
    st.emplace(4); // {2, 4, 5}
    st.insert(1); // {1, 2, 4, 5}

    // {1, 2, 4, 5}
    // returns an iterator which points to the 2
    auto it = st.find(2);

    // if an element is not present in the set it will always return st.end()
    // an iterrator which points to right after the end
    auto it = st.find(6);

    // tales logarithmic time 
    // erases 5 // giving the element to be erased
    st.erase(5); // {1, 2, 4}

    // if it exists in the set it'll give one since only unique elements 
    // are stored inside the set, else it'll give zero if the value doesn't exist inside the set
    st.count(1);

    // memory address to be erased 
    auto it = st.find(1);
    st.erase(it); // takes constant time 

    st.insert(3); // {2, 3, 4}
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    // erases in range.. the starting value, values in b/w but not the end, end thrives
    st.erase(it1, it2); // {first, last} 

    // lower_bound() and upper_bound() works the same was as in vectors
    auto it = st.lowerbound(2);
    auto it - st.upperbbound(3);

}


/*

multiset
everything is same as set 
only difference being multiset stores duplicate values also 

*/

void multiSet() {

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // erases all 1's

    int cnt = ms.count(1);

    // incase if we want to delete the first occcurence of the duplicate value 
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all functions same as set

}


void uSet() {

    unordered_set<int> st;

    /*

    evrythinng same as set 
    just the values are unordered, unsorted 
    
    most of the operations happen in constant time O(1)
    in the worst case time complexity reached 0(n) -- linear time

    lower_bound and upper_bound() functions do not work 

    
    */

}

int main() {


    return 0;

}