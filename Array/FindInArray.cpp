#include <iostream>

using namespace std;
int main() {   
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int marks[]={74,23,-54,76,32};
    bool present=false;
    
    for (int i=0;i<size(marks);i++){
        // mx=max(mx,marks[i]);
        if (n==marks[i]){
            present=true;
            break;
        }
        
        
    }

    if(present) cout<<"It is Present";
    else cout<<"It is Absent";
}