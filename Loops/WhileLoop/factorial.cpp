#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    long long sum=1;

    if(n<0) cout<<"Factorial Are Not Defined For Negitive Numbers ";
    

    while(n>0){
        sum*=n;
        n-=1;
    }

    cout<<sum;
    

}