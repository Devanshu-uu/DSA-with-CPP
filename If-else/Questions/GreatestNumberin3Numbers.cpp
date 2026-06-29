#include <iostream>
#include <climits>
using namespace std;
int main(){
  int n,n1,n2;
  cout<< "Enter a number: ";
  cin>> n>> n1>>n2;
  if(n>=n1 && n>=n2){
    cout<<n<< " is greatest";

  }
  else if (n1>=n && n1>=n2){
    cout<< n1<<" is greatest";
  }

  else{
    cout<<n2<<" is Greatest";
  }

}
