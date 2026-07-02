#include <iostream>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<< "Enter a number: ";
  cin>> n;

  if(n<0){
    n=-n;
  }
  if (n>69){
    cout<<"Magnitude is greater than 69";

  }

  else if(n==69){
    cout<<"The magnitude is same";

  }
  else{
    cout<<"Magnitude not greater than 69";
}






  

}
