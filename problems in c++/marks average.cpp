#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,avg;
    cin>>a>>b>>c>>d>>e;
    avg=(a+b+c+d+e)/5;
    cout<<fixed<<setprecision(2);
    cout<<avg;

    return 0;

}
