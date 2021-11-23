/*  Given the coordinates (x, y) of a center of a circle and it’s radius,
write a program which will determine whether a point lies inside the circle, on the circle or outside the circle.*/

#include <iostream>

using namespace std;

int main()
{
    int x,y ,rad,x1,y1,a,cp;
    cout<<"ENTER THE COORDINATES OF THE CENTER OF A CIRCLE : ";
    cin>>x>>y;
    cout<<"ENTER THE RADIUS OF A CIRCLE: ";
    cin>>rad;
    cout<<"ENTER THE POINT TO KNOW THE POSITION ";
    cin>>x1>>y1;

    a= (x1-x)*(x1-x) + (y1-y)*(y1-y);
    cp=a*1/2;

    if(cp>rad)
    {
        cout<<"POINT LIES OUTSIDE THE CIRCLE ";
    }else if(cp==rad)
    {
        cout<<"POINT LIES ON THE CIRCLE";
    }else
    cout<<"POINT LIES INSIDE THE CIRCLE";

    return 0;
}
