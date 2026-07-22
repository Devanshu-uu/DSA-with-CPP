#include <iostream>
using namespace std;

void countnum(int n ,int* ptr){
    int count=0;
    if(n==0) count+=1;
    while(n!=0){
        count+=1;
        n/=10;

    }
    *ptr=count;
    
}


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    int c;

    countnum(n, &c);
    cout<<c<<endl;






}