//Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    num%4==0 ?cout<<"This year is a leap year":cout<<"This year is not a leap year";
    return 0;
}
