#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    // for(int i=1; i<=n; i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }

    // for (int i=1; i<=sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<i<<" "<<n/i<<" ";
    //     }
    // }
    int count=0;
    for (int i=1; i<=n;i++){
        if(n%i==0){
            count++;
        }
        }
    if(count==1) cout<<"Neither Prime nor Composite"
    else if(count>2){
    cout<<"It is composite Number";
    
}

    else cout<<"It is Prime Number";

     
    }

    


   
   

