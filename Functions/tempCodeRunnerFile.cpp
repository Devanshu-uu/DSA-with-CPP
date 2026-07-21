#include <iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=1; i<=a;i++){
        fact*=i;
    }
    return fact;
} 

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;

    cout<<fact(n) / ((fact(r))*(fact(n-r)));

}