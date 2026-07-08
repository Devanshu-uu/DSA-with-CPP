
#include <iostream>
using namespace std;

int main(){

    // int n;
    // cout<<"Enter a Number: ";
    // cin>>n;


    // bool flag=false;
    // for(int i =2; i<=n-1;i++){
    //     if(n%i==0){
    //         flag=true;
    //         break;
    //     }
    // }
    // if(n==1) cout<<"Nither prime nor compsite";
    // else if(flag) cout<<"Composite Number";
    // else cout<<"Prime Number";


      int n;
    cout<<"Enter a Number: ";
    cin>>n;


    bool flag=false;
    for(int i =2; i<=sqrt(n);i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(n==1) cout<<"Nither prime nor compsite";
    else if(flag) cout<<"Composite Number";
    else cout<<"Prime Number";
    
   

   
//     int count=0;
//     for (int i=1; i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//         }
//     if(count==1) cout<<"Neither Prime nor Composite"
//     else if(count>2){
//     cout<<"It is composite Number";
    
// }

//     else cout<<"It is Prime Number";


     
}

    


   