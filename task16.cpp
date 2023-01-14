#include<iostream>
using namespace std;
float checkCost(string city, string product, float quantity)
{
    float price;
    if(city=="sofia")
    {
        if(product=="coffee")
        price = quantity*0.50;
        if(product=="water")
        price = quantity*0.80;
        if(product=="beer")
        price = quantity*1.20;
        if(product=="sweets")
        price = quantity*1.45;
        if(product=="peanuts")
        price = quantity*1.60;
        return price;
    }
        if(city=="plovdiv")
    {
        if(product=="coffee")
        price = quantity*0.40;
        if(product=="water")
        price = quantity*0.70;
        if(product=="beer")
        price = quantity*1.15;
        if(product=="sweets")
        price = quantity*1.30;
        if(product=="peanuts")
        price = quantity*1.50;
        return price;
    }
        if(city=="varna")
    {
        if(product=="coffee")
        price = quantity*0.45;
        if(product=="water")
        price = quantity*0.70;
        if(product=="beer")
        price = quantity*1.10;
        if(product=="sweets")
        price = quantity*1.35;
        if(product=="peanuts")
        price = quantity*1.55;
        return price;
    }
}
main()
{
    string city,product;
    float quantity,price;
    cin>>city;
    cin>>product;
    cin>>quantity;
    price = checkCost(city,product,quantity);
    cout<<"Price is "<<price;
}
