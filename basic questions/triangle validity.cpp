/*  Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard.
 A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/

#include <iostream>

using namespace std;

int main()
{
    int ang1, ang2,ang3,sum;
    cout<<"ENTER ALL THE THREE ANGLE OF TRIANGLE ";
    cin>>ang1>>ang2>>ang3;
     sum=ang1+ang2+ang3;

     if(sum==180)
     {
         cout<<"THIS IS A VALID TRIANGLE";
     }else cout<<"THIS IS NOT A VALID TRIANGLE";


    return 0;
}
