#include<iostream>
using namespace std;
main()
{
    int cost;
    string brand;
    cout<<"Enter cost of dress ";
    cin>>cost;
    cout<<"Enter the brand ";
    cin>>brand;
    if(cost<=1500)
    {
        if(brand=="MTJ")
        {
            cout<<"Buy dress";
        }
    }
}