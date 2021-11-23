/*Twenty-five numbers are entered from the keyboard into an array.
WAP to find out how many of them are positive, how many are negative, how many are even and how many odd. */

#include <iostream>

using namespace std;

int main()
{
    int arr[25]{1,-4,-6,2,8,5,7,-9,6,-5,11,25,-15,269,-84,-51,-58,46,81,25,94,21,0,15,-5,};
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]>0)
        {
            count1++;
        }else count2++;

        if(arr[i]%2==0)
        {
         count3++;
        }else count4++ ;
    }

    cout<<"total positive no are "<<count1<<endl;
    cout<<"total negative no are "<<count2<<endl;
    cout<<"total even no are "<<count3<<endl;
    cout<<"total odd no are "<<count4<<endl;

    return 0;
}
