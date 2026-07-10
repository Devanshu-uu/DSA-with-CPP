#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int digit=0;
    int sum=0;
    int num=0;

    while(n!=0){
        sum*=10;
        num=n%10;
        sum+=num;
        digit+=num;
        
        
        
        
        n/=10;

        
    }
    cout<<sum<<endl;
    cout<<digit;
    

}