#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;int a[n];
    for (auto &x:a) {
        cin>>x;
    }
    int num=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if (a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                num++;
            }
        }
    }
    cout<<"Array is sorted in "<<num<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
}

