
/* According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard
 write a program to find out what is the day on 1st January of this year. */

#include <iostream>

using namespace std;

int main()
{
    int year, given_year=1900,leap_year,normal_year,total_days ,day;

    cout<<"Enter year to know the day on 1st january";
    cin>>year;


    year= (year-1) - given_year;


    leap_year= year/4;

    normal_year = year-leap_year;


    total_days= (leap_year*366)+ (normal_year*365) +1;

       day = total_days%7;

    switch(day)
    {
    case 0:{ cout<<" MONDAY";}
                 break;
    case 1: {cout<<" TUESDAY";}
                  break;
    case 2: {cout<<" WEDNESDAY";}
                  break;
    case 3: {cout<<" THRUSDAY";}
                   break;
    case 4: {cout<<" FRIDAY";}
                   break;
    case 5: {cout<<" SATURDAY";}
                 break;
    case 6: {cout<<" SUNDAY";}

    default: cout<<"invalid ";
    }

}
