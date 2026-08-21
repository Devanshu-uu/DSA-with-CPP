#include <iostream>
using namespace std;
int main (){
    // int arr[3][4];
    int  sum=0;
    int arr[][4]={{5,3,6,1},{9,9,4,4},{5,6,1,0}};
    
    for (int j=0;j<4;j++){
        for (int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<endl;

// }
cout<<sum<<endl;
}  

}