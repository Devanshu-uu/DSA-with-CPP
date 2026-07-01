#include <iostream>
using namespace std;
int main(){

    int x=4;
    int y=(x>2) ? ((x>3) ? x-3: x*4 ) : ((x<5) ? x*5 : x-1);
    cout<< y;
    

}