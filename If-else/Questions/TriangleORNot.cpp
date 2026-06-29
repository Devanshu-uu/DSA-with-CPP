#include <iostream>
#include <climits>
using namespace std;
int main(){
   int a,b,c;
   cout<< "Enter three numbers: ";
   cin>>a>>b>>c;
   if(a+b>c and b+c>a and a+c>b){
    cout<<"Valid Triangle";
   }
   else{
    cout<<"Not a Valid Triangle";
   }

}
