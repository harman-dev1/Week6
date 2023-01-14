#include<iostream>
using namespace std;
float totalIncome(string type,float row,float column)
{
    float income;
    if(type=="Premier")
    {
        income = row*column*12.00;
    }
        if(type=="Normal")
    {
        income = row*column*7.50;
    }
        if(type=="Discount")
    {
        income = row*column*5.00;
    }
    return income;
}
main()
{
    float row,column;
    string type;
    float income;
    cout<<"Enter screen type ";
    cin>>type;
    cout<<"Enter row ";
    cin>>row;
    cout<<"Enter column ";
    cin>>column;
    income = totalIncome(type,row,column);
    cout<<"Income is "<<income;
}