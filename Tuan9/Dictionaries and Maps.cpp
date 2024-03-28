#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
           map<string,int> mp;
    int n;cin>>n;
    while(n--){
       string s;cin>>s;int a;cin>>a;
       mp[s]=a;
        }
            string x;
        while (cin>>x) {
            if (mp[x]==0) cout<<"Not found"<<endl;
            else cout<<x<<"="<<mp[x]<<endl;
        }
    
    return 0;
}
