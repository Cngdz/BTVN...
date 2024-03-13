#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    map<int,bool> m;
    map<int,int> c;
    int n; cin >> n;
    vector<int> v;
    for(int i=0;i<100000;i++){
        c[i]=0;
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
        m[x] = true;
        if(c[x]==0){
        c[x] = i+1 ;
        }
    }
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        if (m[x])
            cout << "Yes " << c[x] << endl;
        else {
            auto it = lower_bound(v.begin(), v.end(), x);
            int index = it - v.begin();
            cout << "No " << index + 1 << endl;
        }
    }
    return 0;
}

