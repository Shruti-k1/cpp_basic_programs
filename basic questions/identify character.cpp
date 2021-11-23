/* Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter,
 a small case letter, a digit or a special symbol.*/
#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"ENTER ANY CHARACTER ";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<ch<<" is capital letter";
    }else if(ch>=97 && ch<=122)
    {

    cout<<ch<<" is small letter";
    }else if(ch>=48&& ch<=57)
    {
        cout<<ch<<" is a digit";
    }else if(ch>=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)
    {
        cout<<ch<<" is special symbol";
    }
    return 0;
}
