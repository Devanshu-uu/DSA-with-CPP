#include <iostream>
using namespace std;
int main (){
    // int arr[3][4];
    int mx=INT_MIN;
    int row=-1;
    int arr[][4]={{9,9,9,9},{9,9,4,4},{5,6,1,0}};
    
    for (int i=0;i<3;i++){
        int  sum=0;

        for (int j=0;j<4;j++){
            sum+=arr[i][j];
            
        }
        if (sum>mx){
            row=i;
            mx=sum;}
        


}  
cout<<row<<endl;

}