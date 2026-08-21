#include <iostream>
using namespace std;
int main (){
    // int arr[3][4];
    int arr[][4]={{5,3,6,1},{9,9,4,4},{5,6,1,0}};
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

}
}