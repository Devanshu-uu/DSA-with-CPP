#include <iostream>
using namespace std;
int main(){
  int l;
  cout<< "Enter length: ";
  cin>>l;
  
  int b;
  cout<< "Enter breath: ";
  cin>>b;

  int area=l*b;
  int perimeter=2*(l+b);

  if(area>perimeter){
    cout<<"Area is Greater then Perimeter";
  }
  else if(area==perimeter){
    cout<<"Area and Perimeter are Equal";
  }

  else{
    cout<<"Perimeter is Greater then Area";
  }

 
  

}
