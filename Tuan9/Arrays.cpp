#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for (int &x:arr) {
        cin>>x;
    }
    reverse(arr,arr+n);
    for (int x:arr) {
        cout<<x<<" ";
    }
}
