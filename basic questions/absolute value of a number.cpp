/*Find the absolute value of a number entered through the keyboard.*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  cout<<"Enter any number to know the absolute value of it ";
  cin>>num;
  if(num<0)
  {
      int a;
      a= -(num);
      cout<<"absolute value of  "<<num<<" is  "<<a;
  }else
  cout<<"absolute value of  "<<num<<" is  "<<num;

    return 0;
}
