/* Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).*/

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"ENTER THE POINTS (X,Y) ";
    cin>>x>>y;
    if(y==0&&x!=0)
    {
        cout<<"THIS POINT LIES ON THE X-AXIS";
    }else if (x==0&&y!=0)
    {
        cout<<"THIS POINT LIES ON THE Y-AXIS";
    }else if(x==0&&y==0)
    {
        cout<<"THIS POINT LIES AT THE ORIGIN ";
    }else cout<<"THIS POINT LIES ON THE PLANE";

    return 0;
}
