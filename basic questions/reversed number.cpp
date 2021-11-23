
/*A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine
 whether the original and reversed numbers are equal or not. */

#include <iostream>

using namespace std;

int main()
{
    int rev=0,num,n;
    cout<<"enter any number";
    cin>>num;
    n=num;
    do
     { int rem;
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    } while(num!=0);

    if(n==rev)
    {
        cout<<"This number is a palindrome number "<<rev;
    }else cout<<"reverse of the given number is "<<rev;


    return 0;
}
