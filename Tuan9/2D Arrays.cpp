#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[6][6];
    for (int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    int max=-10000;
    for (int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            if (i!=0 && i!=5 && j!=0 && j!=5){
     int n=a[i][j]+a[i-1][j]+a[i+1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1];
     if(n>max) max=n;
            }
        }
    }
    cout<<max;
}
