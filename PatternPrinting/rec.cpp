#include <iostream>
using namespace std;
;

int main(){

    
int row;
int col;
cout<<"Enter Row: ";
cin>>row;
cout<<"Enter Col: ";
cin>>col;
    for(int i=1; i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    


}