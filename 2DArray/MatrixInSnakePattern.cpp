#include <iostream>
using namespace std;
int main (){
    int start=0 ,end=5;
    int arr[][5]={
     {6,0,9,2,3}
    ,{5,2,6,0,9}
    ,{8,4,8,1,7},
    {4,1,7,3,6}};
    bool flag=false;

    for (int i=0;i<4;i++){

        if(i%2==0){
            for(int j=0;j<5;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=4;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }

        }

//         if(flag){
//             for(int j=start;j>end;j--){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//         else{
//             for(int j=start;j<end;j++){
//             cout<<arr[i][j]<<" ";
           
//         }
        

//         }
        
//   if(flag){
//             start=0;
//             end=5;
//             flag=false;
//         }
//         else{
            
//             start=4;
//             end=-1;
//             flag=true;
//         }

    }

}





