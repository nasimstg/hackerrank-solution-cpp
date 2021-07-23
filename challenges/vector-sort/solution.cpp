#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, x, *i; // initializing variable
    vector<int>v; //initializing vector array v
    cin >> t; // t for testcase or number of elm
  
    while (t--) { //running for t times
    cin >> x; 
    v.push_back(x); // adding value of x to the array
    }
    sort(v.begin(),v.end()); //sorting 
  
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << ' '; // printing every elemnet of the vector array
    return 0;
}
