#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while (t--){
        string s,m,n;cin>>s;
        for (int i=0;i<s.size();i++){
            if (i%2==0) m+=s[i];
            else n+=s[i];
        }
        cout<<m<<" "<<n<<endl;
            } 
    return 0;
}

