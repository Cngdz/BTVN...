#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    student sv1;
    cin>>sv1.age>>sv1.first_name>>sv1.last_name>>sv1.standard;
    cout<<sv1.age<<" "<<sv1.first_name<<" "<<sv1.last_name<<" "<<sv1.standard; 
    return 0;
}

