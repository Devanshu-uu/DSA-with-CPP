#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int count=0;
    if(n==0) count++;
    
  
    while(n!=0){
        count+=1;
        n/=10;

    }
    cout<<count;
   

    


}