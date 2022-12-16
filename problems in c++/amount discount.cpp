#include<iostream>
using namespace std;
int main()
{
    float it1,it2,dis,sum,disbal,ams;
    cin>>it1>>it2>>dis;
    sum=it1+it2;
    ams=(dis/100)*sum;
    disbal=sum-ams;

    cout<<sum<<endl;
    cout<<disbal<<endl;
    cout<<ams<<endl;


    return 0;

}
