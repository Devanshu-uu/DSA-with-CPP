#include <iostream>
using namespace std;
int main (){
    // int arr[3][4];
    int smallest=INT_MAX;
    int arr[][4]={{9,9,9,9},{9,9,4,4},{5,6,2,3}};
    
    for (int i=0;i<3;i++){
        int  mx=INT_MIN;
        

        for (int j=0;j<4;j++){
            if (arr[i][j]>mx){
                mx=arr[i][j];
        }  
        }
         if (mx<smallest){
            smallest=mx;

            }
        


} 
        cout<<smallest<<endl;


}