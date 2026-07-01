#include <iostream>
using namespace std;
int main(){

    int x=5;
    // int y= (x>12) ? x-3: x*2;
    int y =(x++>4) ? x/2 :x*3; 
    cout<<y;

    

}