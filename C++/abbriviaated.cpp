#include <iostream>
using namespace std;
int main()
{
    char name[20],mname[20],lname[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your middle name: ";
    cin>>mname;
    cout<<"Enter your last name: ";
    cin>>lname;
    cout<<"Your name is: "<<name[0]<<" "<<mname[0]<<" "<<lname;
    return 0;
}