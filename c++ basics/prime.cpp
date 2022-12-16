#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number:";
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
       if(n%i==0)
       {
           break;
       }
    }
        if(n==i)
       {
           cout<<"it is a prime number:";
       }
       else
       {
            cout<<"it is not a prime number:";
       }

         return 0;
}
