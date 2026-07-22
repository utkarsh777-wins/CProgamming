#include <bits/stdc++.h>

using namespace std;


/*

LIFO - last in first out 
can't access stack elements through indexing 

*/

void eStack() {

    //stack<datatype> variable_name;
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout << st.top() << endl; // prints 5, since LI is the FO

    st.pop();   // {4, 3, 2, 1} // popped down the last element

    cout << st.top() << endl; // prints 4

    cout << "size: " << st.size() << endl; // prints the size 

    cout << "isEmpty?: " << st.empty() << endl;   // false0

    // swapping out
    stack<int>st1, st2;
    st1.swap(st2);

}

int main() {

    eStack();

    return 0;

}