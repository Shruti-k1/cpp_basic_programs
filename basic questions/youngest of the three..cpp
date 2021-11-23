/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three. */

#include <iostream>

using namespace std;

int main()
{
    int ram,shayam , ajay ;
    cout<<"ENTER AGE OF RAM: ";
    cin>>ram;
    cout<<"ENTER AGE OF SHAYAM: " ;
    cin>>shayam;
    cout<<"ENTER AGE OF AJAY : ";
    cin>>ajay;

    if(ram>shayam && ram>ajay)
    {
        cout<<"RAM IS ELDER THAN SHAYAM AND AJAY";
    }else if(shayam>ram && shayam>ajay)
    {
        cout<<"SHAYAM IS ELDER THAN RAM AND AJAY";
    }else
    cout<<" AJAY IS ELDER THAN RAM AND SHAYAM";

    return 0;
}
