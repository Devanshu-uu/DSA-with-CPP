#include <iostream>

using namespace std;
int main() {   
    int marks[]={74,23,-54,76,32},mx=marks[0];
    int mn=marks[0];
    // int max=INT_MIN;
    for (int i=0;i<size(marks);i++){
        // mx=max(mx,marks[i]);
        if (mx<marks[i]){
            mx=marks[i];
        }
        if (mn>marks[i]){
            mn=marks[i];
        }
    }
cout<<mn<<endl;
cout<<mx<<endl;
 
    
   

}