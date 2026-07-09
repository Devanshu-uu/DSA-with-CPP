#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int count=0;
    while(n!=0){
        count+=1;
        n/=10;

    }
    cout<<count;
   

    


}