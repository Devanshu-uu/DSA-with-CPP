/*Ques: If cost price and selling price of an 
item is input through the keyboard, write a 
program to determine whether the seller 
has made profit or incurred loss or no profit 
no loss. Also determine how much profit he 
made or loss he incurred. */

#include <iostream>
#include <climits>
using namespace std;
int main(){
  int cost;
  cout<< "Enter Cost Price: ";
  cin>> cost;
  int sell;
  cout<< "Enter Cost Price: ";
  cin>> sell;

  if(cost>sell){
   
    cout<<cost-sell<<" in Loss";
  }
  else if (cost==sell){
    cout<<"No Loss No Profit";

  }

  else{
    cout<<sell-cost<<" in Profit";

  }


 
  

}
