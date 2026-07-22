#include <iostream>
using namespace std;


int main(){

    int x=4;
    int* p=&x;

    cout<<*p<<endl;

    *p=10;
    cout<<x<<endl;

    *p+=3;
    cout<<x<<endl;


  
}