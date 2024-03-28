#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        int number = stoi(S);
        cout<<number;
    }
    catch (invalid_argument) {
        cout<<"Bad String";
    }
    return 0;
}

