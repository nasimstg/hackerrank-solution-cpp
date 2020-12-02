/*
  Problem: Structure
  Origin: Hackerrank
  Editor: Mohammed Nasim
  Artcle: https://www.programiz.com/cpp-programming/structure
  Facebook: https://www.fb.com/mohammed.nasim.on3
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
