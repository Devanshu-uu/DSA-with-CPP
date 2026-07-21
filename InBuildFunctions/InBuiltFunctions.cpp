#include <iostream>
#include <cmath>
using namespace std;

int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int main(){
    cout<<max(3,4)<<endl; // Function Overloaded

    cout<<pow(2,4)<<endl; 
    cout<<pow(2.4,4)<<endl; 
    cout<<pow(2.4,4.4)<<endl; 
    cout<<sqrt(25)<<endl; // square root
    cout<<cbrt(1000)<<endl;
    cout<<abs(-4)<<endl;
    cout<<max(65,max(54,76))endl;
    


   
}