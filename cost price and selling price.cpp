/* If cost price and selling price of an item is input through the keyboard, write a program to determine whether
 the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/

#include <iostream>

using namespace std;

int main()
{
    int cp, sp;
    cout<<"Enter cost price of the item   ";
    cin>>cp;
    cout<<"Enter selling price of the item  ";
    cin>>sp;

    if(sp>cp)
    {
       int p;
       p=sp-cp;
       cout<<"you have a profit of  "<<p;

    } else if(sp<cp)
    {
        int l;
        l=cp-sp;
        cout<<"you have a loss of  "<<l;
    }
    else cout << "neither profit nor loss";

    return 0;
}
