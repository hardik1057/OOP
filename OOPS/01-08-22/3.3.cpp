//WAP to convert given second into its equivalent hour, minute and second
#include<iostream>
using namespace std;
int main()
{
    int seconds,minutes,hours;
    cout<<"Enter time in seconds- ";
    cin>>seconds;
    minutes=seconds/60;
    hours=minutes/60;
    cout<<seconds<<" Seconds is Equivalent to "<<int(hours)
    <<" Hours, "<<int(minutes%60)<<" Minutes and "<<int (seconds%60)
    <<" Seconds."<<endl;
    return 0;
}