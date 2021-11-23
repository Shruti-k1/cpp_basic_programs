/*Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
−	There are 21 matchsticks. −	The computer asks the player to pick 1, 2, 3, or 4
matchsticks. −	After the person picks, the computer does its
picking. −	Whoever is forced to pick up the last matchstick
loses the game.
 */
#include <iostream>

using namespace std;

int main()
{
    int a=0,u,sum,total=21,c;
    cout<<"MATCHSTICK GAME\n";
    cout<<"RULES : THERE ARE 21 MATCHSTICKS \n YOU CAN PICK MINIMUN 1 OR MAXIMUM 4 MATCHSTICK AT A TIME \n FIRST TURN WILL BE YOURS THEN COUMPUTER WILL PICK"<<endl;

    cout<<"START \n";
  do
   {
       cout<<"\n your turn: ";
       cin>>u;

       cout<<"computer : ";
       cin>>c;
       sum=u+c;
       a=a+sum;
       total=total-sum;

   }while(a!=20);

   if(total==1){
    cout<<"you lost winner is computer";
   }else cout<<"you win";

  //cout<<"you lose winner is computer";
    return 0;
}
