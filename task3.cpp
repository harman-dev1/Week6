#include<iostream>
using namespace std;
int check(int number1,int number2, int number3);
main()
{
    int number1,number2,number3,greater;
    cout<<"Enter number1:";
    cin>>number1;
    cout<<"Enter number2:";
    cin>>number2;
    cout<<"Enter number3:";
    cin>>number3;
    greater=check(number1,number2,number3);
    cout<<greater<<" is greater";
}
int check(int number1,int number2,int number3)
{
    int greater;
   if(number1>number2&&number1>number3)
   {
    greater=number1;
   }
   if(number1<number2&&number2>number3)
   {
    greater = number2;
   }
   if(number1<number3&&number3>number2)
   {
    greater = number3;
   }
   return greater;
}