#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> a;
    int n; 
    cin >> n;
    a.resize(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m; 
    cin >> m;
    if (m >= 1 && m <= a.size()) {
        a.erase(a.begin() + m - 1); 
    }

    int x, b; 
    cin >> x >> b;
    
        a.erase(a.begin() + x - 1, a.begin() + b - 1); 
    int p = a.size();
    cout<<p<<endl;
    for (int i = 0; i < p; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

