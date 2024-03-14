#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void setvalue(int a,string b,string c,int d){
            age=a;
            first_name=b;
            last_name=c;
            standard=d;
        }
        void cut(){
            cout<<age<<endl;
            cout<<last_name<<", "<<first_name<<endl;
            cout<<standard<<endl;
        }
        void get(){
            cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
        }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    student x;
    int a,d;
    string b,c;
    cin>>a>>b>>c>>d;
    x.setvalue(a,b,c,d);
    x.cut();
    cout<<endl;
    x.get();
    return 0;
}

