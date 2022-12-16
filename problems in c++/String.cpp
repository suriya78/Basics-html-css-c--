#include<iostream>
using namespace std;

int main()
{
    string a,b;
    int c;
    char d;
    double e;
    getline(cin,a);
    cin>>b>>c>>d>>e;
    cout<<"Event Name :"<<a<<endl;
    cout<<"Event Type :"<<b<<endl;
    cout<<"Expected Count :"<<c<<endl;
    cout<<"Paid Entry :"<<d<<endl;
    cout<<"Projected Expense :"<<e<<"L";

    return 0;
}
