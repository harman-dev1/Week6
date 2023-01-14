#include<iostream>
using namespace std;
string check(int age,char gender)
{
    string title;
    if(age>=16)
    {
        if(gender=='m')
        {
            title="Mr.";
        }     
        else
        {
            title="Ms.";
        }
    }
    if(age<16)
    {
        if(gender=='f')
        {
            title = "Master";
        }
    }
}
main()
{
    int age;
    char gender;
    cout<<"Enter your age ";
    cin>>age;
    cout<<"Enter your gender ";
    cin>>gender;

}