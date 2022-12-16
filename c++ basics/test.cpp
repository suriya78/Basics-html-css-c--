
#include<iostream>
using namespace std;

int main()
{
    int tar,run,count=0,sum=0;
    cin>>tar>>run;

    while(1)
    {
        sum=sum+run;
        count++;
        if(sum>=tar){
            break;
        }
        cin>>run;
    }
    cout<<"The number of turn is"<<count<<endl;
    return 0;
}
