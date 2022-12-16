#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float s,area;
    cin>>s;
    area=s*(1.732/4)*s;
    cout<<fixed<<setprecision(2);
    cout<<area;
    return 0;
}
