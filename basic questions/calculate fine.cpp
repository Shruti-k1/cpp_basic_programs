/* A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees.
If you return the book after 30 days your membership will be canceled.
Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message.*/

#include <iostream>

using namespace std;

int main()
{
   int day ,paise ;
    cout<<"Enter number of days student is late to return the book :";
    cin>>day;
     if(day<=5)
     {
         cout<<"you have to pay 50 paise";
     }else if(day>5&& day<10)
     {
         cout<<"you have to pay 1 rupee";
     }else if(day>10&&day<30)
     {
         cout<<"you have to pay 5 rupee";
     }else if(day>30)
    {
        cout <<"your membership is canceled.";
    }
    return 0;
}
