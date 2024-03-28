#include <bits/stdc++.h>
using namespace std;

int max(int n){
    int maxc=0;
    int currentc=0;
    while(n>0){
        if (n%2==1) {
            currentc++;
            maxc=max(maxc,currentc);
        }
        else {
            currentc=0;
        }
        n/=2;
    }
    return maxc;
}
int main(){
    int n;cin>>n;
    cout<<max(n);
}
