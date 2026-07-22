#include <iostream>
using namespace std;

int x=3; // global varia ble
void fun(){
    x=4;
}

int main(){
    cout<<x<<endl;

    fun();

    cout<<x<<endl;

    




}