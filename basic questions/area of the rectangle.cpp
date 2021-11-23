/* Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle
 is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/

#include <iostream>

using namespace std;

int main()
{
    /*int l,b,area,perimeter;
    cout<<"enter length of rectangle: ";
    cin>>l;
    cout<<"enter breadth of rectangle: ";
    cin>>b;
    area=l*b;
    cout<<"area is "<<area<<endl;
    perimeter=2*(l+b);
     cout<<"perimeter is "<<perimeter<<endl;

    if (area>perimeter)
    {
        cout<<"area is greater than perimeter";
    } else cout<<"area is less than perimeter"; */

    int arr[5]={1,1,2,4,6};
    int a,count=0;
    cout<<"enter any element for search";
    cin>>a;

  for(int i=0;i<5;i++)
     {
        if(arr[i]==a)
        {
          count++;
        }

     }
     cout<<"it is present "<<count<<"  times" ;

    return 0;
}
