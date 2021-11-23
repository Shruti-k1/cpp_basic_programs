//Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators.
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    a>b?(a>c?cout<<a<<"is greater":cout<<c<<" is greater"):(b>c?cout<<b<<" is greater":cout<<c<<" is greater");
    return 0;
}
