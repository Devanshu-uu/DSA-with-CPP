#include <iostream>
#include <vector>
using namespace std;
void print(vector <int> &arr){
    for(int elem :arr) cout<<elem<<" ";
    cout<<endl;
}
int main() {
    vector<int> arr={10,20,30,40,50,60,70};
    // int temp;
    // for (int i=0;i<(arr.size()/2);i++){
        
    //     temp=arr[i];
    //     arr[i]= arr[(arr.size()-1)-i];
    //     arr[(arr.size()-1)-i]=temp;


    // }

    // for (int elem:arr){
    //     cout<<elem<<" ";
    // }

    int i=0,j=arr.size()-1;
    print(arr);
    while(i<j){
        // int temp =arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        swap(arr[i],arr[j]);
        i++;
        j--;
        
    }
    print(arr);
}