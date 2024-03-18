#include <bits/stdc++.h>
using namespace std;
    int res=0;
int powersum(int x,int tong,int k,int n){
    if (x==0) res++;
    int r= (int) pow(tong,1.0/n);
    for (int i=k+1;i<=r;i++){
        int a=x-pow(i,n);
        if (a>=0){
            powersum(a,tong,i,n);
        }
    }
    return res;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<powersum(x,x,0,n);
}
