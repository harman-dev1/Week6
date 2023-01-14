#include<iostream>
using namespace std;
string grade(int marks)
{
    string marks1;
    if(marks<50)
    {
       marks1 = "f";
    }
     else if(marks>=50&&marks<60)
    {
        marks1 = "E";
    }
    else if(marks>=60&&marks<70)
    {
        marks1 = "D";
    }
    else if(marks>=70&&marks<80)
    {
        marks1 = "C";
    }
    else if(marks>=80&&marks<85)
    {
        marks1 = "B";
    }
    else if(marks>=85)
    {
        marks1 = "A";
    }
    return marks1;
}
main()
{
    string result;
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    result = grade(marks);
    cout<<"Grade is "<<result;
}