#include<iostream>
using namespace std;
int main()
{
        float x,y,pro;
 cin>>x>>y;
 if(x<y*12)
 {
     cout<<"Profit : Rs."<<y*12-x<<endl;
 }
 else{
     cout<<"Loss : Rs."<<x-y*12<<endl;
     return 0;
 }
    }
