#include <iostream>
using namespace std;
int main(){
    float x;
    cout<< "Enter The Number: ";
    cin>> x;
    int y = (int)x;
    if (x==y){
        cout<< "Integer Number";

    }

    else{
        cout<< "Real Number";
    }

}
