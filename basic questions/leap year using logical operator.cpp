/* Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||.*/
#include <iostream>

using namespace std;

int main()
{
   int year ;
   cout<<"ENTER ANY YEAR ";
   cin>>year;
   if((year%4==0 || year%400==0) && year%100!=0)
   {
       cout<<year<<" IS A LEAP YEAR";
   }else
   cout<<year<<"  IS NOT A LEAP YEAR";
    return 0;
}
