#include <iostream>
using namespace std;


int main(){

    
int n;
cout<<"Enter n: ";
cin>>n;

// for(int i=1; i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=1;j<=2*i-1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//     }
// for(int i=1;i<=n-1;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"  ";
//     }
//     for (int j=1;j<=2*(n-i)-1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
int space=n-1 , star=1;   
for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=star;j++){
        cout<<"* ";
    }
    if(i<n){
        space--;
        star+=2;
    }
    else{
        space++;
        star-=2;
    }
    cout<<endl;
}




       
        
}

