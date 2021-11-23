//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
     int temp=1;
    cout<<"enter two numbers  ";
    cin>>num1>>num2;

    for(int i=0;i<num2;i++)
    {
        temp=temp*num1;
    }
    cout<<num1<<" to the power "<<num2<<" is "<<val;

    return 0;
}
