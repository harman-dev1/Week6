#include<iostream>
using namespace std;

float findPrice(string category,float group,float budget)
{
    float price;
    if(category=="Normal"&&(group>=1&&group<=4))
    {
        budget = budget-(budget*75/100);
        price = budget-249.99;
        return price;
    }
    if(category=="Normal"&&(group>=5&&group<=9) )
    {
        budget = budget-(budget*60/100);
        price = budget-249.99;
        return price;
    }
    if(category=="Normal"&&(group>=10&&group<=24) )
    {
        budget = budget-(budget*50/100);
        price = budget-249.99;
        return price; 
    }
    if(category=="Normal"&&(group>=25&&group<=49))
    {
        budget = budget-(budget*40/100);
        price = budget-249.99;
         return price;
    }
    if(category=="Normal"&&group>=50 )
    {
        budget = budget-(budget*25/100);
        price = budget-249.99;
         return price;
    }
        if(category=="VIP"&&(group>=1&&group<=4))
    {
        budget = budget-(budget*75/100);
        price = budget-499.99;
         return price;
    }
    if(category=="VIP"&&(group>=5&&group<=9))
    {
        budget = budget-(budget*60/100);
        price = budget-499.99;
         return price;
    }
    if(category=="VIP"&&(group>=10&&group<=24) )
    {
        budget = budget-(budget*50/100);
        price = budget-499.99;
         return price;
    }
    if(category=="VIP"&&(group>=25&&group<=49) )
    {
        budget = budget-(budget*40/100);
        price = budget-499.99;
         return price;
    }
    if(category=="VIP"&&group>=50 )
    {
        budget = budget-(budget*25/100);
        price = budget-499.99;
         return price;
    }
}
main()
{
    float budget,price;
    float group;
    string category;
    cin>>budget;
    cin>>category;
    cin>>group;   
    float newPrice = findPrice(category,group,budget);
    newPrice = newPrice - group * 499.99;
    if(newPrice > 0)
    cout<<"YESSSS you have enough :"<<newPrice;
    if(newPrice < 0)
    {
        newPrice = - newPrice;   
        cout<<"You need "<< newPrice;  
    }  
}