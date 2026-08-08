#include <iostream>
using namespace std;
void change(int x[]){
    x[0]=10;
}
int main() {
    int x[]={74,23,54,76,32};
    change(x);
    cout<<x[0];
  
    

}