/*  Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.*/

#include <iostream>

using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3,a,b;
    cout<<"ENTER FIRST POINT (X1,Y1): " ;
    cin>>x1>>y1;
    cout<<"ENTER SECOND POINT (X2,Y2) : ";
    cin>>x2>>y2;
    cout<<"ENTER THIRD POINT (X3,Y3) : ";
    cin>>x3>>y3;

     a=(y2-y1)/(x2-x1);
     b=(y3-y1)/(x3-x1);
     if(a==b)
     {
         cout<<"THE GIVEN POINTS DO FALL ON THE STRAIGHT LINE";
     }else
     cout<<"THESE POINTS ARE NOT FALL ON THE STRAIGHT LINE";

    return 0;
}
