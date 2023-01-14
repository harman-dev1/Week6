#include<iostream>
using namespace std;
main()
{
    int num1,num2,num3;

    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1==num2&&num2==num3)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}