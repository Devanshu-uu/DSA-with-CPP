#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr={10,20,30,40,50,60,70};
    int temp;
    for (int i=0;i<arr.size();i++){
        temp=arr[i];
        arr[i]= arr[(arr.size()-1)-i];
        arr[(arr.size()-1)-i]=temp;


    }

    for (int elem:arr){
        cout<<elem<<" ";
    }

}