#include<iostream>
using namespace std;
int main()
{
    int tn,stn,ctn,tpn,in,profit;
    cin>>tn>>stn>>ctn;
    tpn=tn*stn;
    in=(tn*ctn)+100;
    profit=tpn-in;
    cout<<profit;

    return 0;
}
