#include<iostream>
using namespace std;
int discount(int amount,string day,string month)
{
    float dis;
    if(month=="October" && day=="Sunday")
    {
        dis = amount-(amount*10/100);
        return dis;
    }
    else if(day =="Sunday")
    {
        dis = amount-(amount*5/100);
        return dis;
    }
    else
    {
        dis = 0;
    }
}
main()
{
    int amount,dis;
    string day,month;
    cout<<"enter amount ";
    cin>>amount;
    cout<<"enter day ";
    cin>>day;
    cout<<"enter month ";
    cin>>month;
    dis = discount(amount,day,month);
    cout<<"Discount is "<<dis;
}