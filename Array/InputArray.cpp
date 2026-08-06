#include <iostream>

using namespace std;
int main() {    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int marks[n];

    cout<<"Enter marks: ";

    for(int i=0;i<n;i++){
         cin>>marks[i];

    }

    for (int i=0 ;i<n;i++){ // Treverse or 
        cout<<marks[i]<<endl;
    }
    for (int i=0 ;i<n;i++){ // Treverse or 
        if(marks[i]<0) cout<<marks[i];
    }

    


}