#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {

    if(p1.second < p2.second) {return true;}
    if(p1.second > p2.second) {return false;}

    // in case p1.second == p2.second
    if(p1.first > p2.first) {return true;}
    //else
    return false;

}

void eExtra() {

    // sorting in CPP STL

    // in case of array
    // sort(start, end+1)   includes the start but not the end 
    sort(a, a+4);

    // // in caase of vector   --here end() is end+1 so the same sort(start, end)
    sort(v.begin(), v.end());

    // // sorting specific indices/elements 
    sort(a+2, a+4);

    // // sorting in descending order 
    sort(a, a+n, greater<int>);

    pair<int, int> a[] = {
        {1, 2}, {2, 1}, {4, 1}
    };

    // sort it according to the second element 
    // incase second element is the same,
    // then sort it accorrding to first element but in descending order

    sort(a, a+n, comp);     
    // comp is a self written comparator
    
    int num = 7; // 111 -- 3 set bits 
    int cnt = __builtin_popcount();     // returns the number of set bits 

    long long num = 151656831165646;
    int cnt = __builtin_popcountll();   // ffor long long datatype 

    string s = "123";

    // prints all the permutations of the string 
    // once no permutations are left it returns false and breaks out the while loop in this case
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a+n);

    int mini = *min_element(a, a+n);
    
}

int main() {


    return 0;
    
}