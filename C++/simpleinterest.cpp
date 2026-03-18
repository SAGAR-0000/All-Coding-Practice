#include<iostream>
using namespace std;
int main()
{
    float principal, rate, time,simpleinterest;
    cout<<"Enter Principal : ";
    cin>>principal;
    cout<<"Enter rate : ";
    cin>>rate;
    cout<<"Enter time : ";
    cin>>time;
    simpleinterest=(principal*rate*time)/100;
    cout<<"Simple Interest is: "<<simpleinterest;
    return 0;
}