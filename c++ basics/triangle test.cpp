#include<iostream>
using namespace std;
int  main()
{
    float s1,s2,s3;
    cin>>s1>>s2>>s3;
      if(s1==s2&&s2==s3&&s3==s1)
      {
          cout<<"EQUILATERAL Triangle"<<endl;
      }
      else if(s1==s2&&s2!=s3&&s3!=s1)
      {
          cout<<"Isosceles Triangle"<<endl;
      }
      else if(s1!=s2&&s2!=s3&&s3!=s1)
      {
          cout<<"Scalene Triangle"<<endl;
      }
      return 0;
}
