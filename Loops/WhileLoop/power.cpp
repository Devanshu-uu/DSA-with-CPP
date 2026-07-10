#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter exoponent: ";
    cin>>b;
    // int i=1;
    int sum=1;
    // while(i<=b){
    //     sum*=a;
    //     i+=1;
    // }


    for (int i=1;i<=b;i++){
        sum*=a;
        if(a==1) break;
    }
    if(a==0 && b==0) cout<<"Indeterminate Form";
    else cout<<sum; 

}