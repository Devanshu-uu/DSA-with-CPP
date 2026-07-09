#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int digit=0;



    while(n!=0){
        digit+=n%10;
        
        n=n/10;
    }
    cout<<digit;
    


}