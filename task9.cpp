#include<iostream>
using namespace std;
string checkSpeed(float speed)
{
    string speedShow;
    if(speed<=10)
    {
        speedShow = "Slow";
    }
    if(speed>10&&speed<=50)
    {
        speedShow = "Average";
    }
    if(speed>50&&speed<=150)
    {
        speedShow = "Fast";
    }
    if(speed>150&&speed<=1000)
    {
        speedShow = "Ultra fast";
    }
    if(speed>1000)
    {
        speedShow = "Extemely Fast";
    }
    return speedShow;
}
main()
{
    string speedShow;
    float speed;
    cout<<"Enter speed ";
    cin>>speed;
    speedShow = checkSpeed(speed);
    cout<<speedShow;
}