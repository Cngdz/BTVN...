#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  int m=a.size();
  int n=b.size();
  cout<<m<<" "<<n<<endl;
  string x=a+b;
  cout<<x<<endl;
  swap(a[0],b[0]);
  cout<<a<<" "<<b;
    return 0;
}

