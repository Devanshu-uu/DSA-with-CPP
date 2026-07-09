#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int digit=0;
    int sum=0;

    while(n!=0){
        sum*=10;
        sum+=n%10;
        
        
        
        
        n/=10;

        
    }
    cout<<sum;
    

}