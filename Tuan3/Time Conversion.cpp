#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int n=s.size();
    if (s[n-2]=='A') {
        if (s[0]!='0' && s[1]!='0' && s[1]!='1' ){
            string c= s.substr(0,2);
            int x= stoi(c);
            x=x-12; string y=to_string(x);
            s[0]='0';
            s[1]=y[0];
        }
         s.erase(s.begin()+n-2,s.begin()+n);
    }
    if (s[n-2]=='P') {
        if (s[0]=='0' || s[1]=='0' || s[1]=='1' ){
            string c=s.substr(0,2);
            int x= stoi(c);
            x=x+12; string y=to_string(x);
            s[0]=y[0];
            s[1]=y[1];
        }
         s.erase(s.begin()+n-2,s.begin()+n);
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

