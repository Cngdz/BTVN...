#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    int a[n];int b[n+1];
    int x=0;int y=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        x+=a[i];
    }
     for (int i=0;i<n+1;i++){
         cin>>b[i];
        y+=b[i];
    }
    cout<<y-x;
    return 0;
}

