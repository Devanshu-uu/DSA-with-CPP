#include <iostream>
using namespace std;


int main(){

    int a , b, c;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    // c=a;
    // a=b;
    // b=c;

    // a=a+b;
    // b=a-b;
    // a=a-b;
    
    a=(a+b)-(b=a);

    
    cout<<a<<" "<<b<<" ";


}