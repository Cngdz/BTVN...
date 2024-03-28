#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int m,n,p;
    m=c-f;
    n=b-e;
    p=a-d;
    if(m>0) cout<<"10000";
    else if(m<0) cout<<"0";
    else {
        if(n>0) cout<<500*n;
        else if(n<0) cout<<"0";
        else {
            if (p>0) cout<<15*p;
            else cout<<"0";
        }
    }
    return 0;
}

