#include <iostream>
using namespace std;
int main() {
    int marks[]={4,3,4,7,2};
    long long product=1;

    for (int i =0;i<size(marks);i++){
        product*=marks[i];
    }

    cout<<product;
    



}