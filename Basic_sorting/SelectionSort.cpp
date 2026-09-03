#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {7,4,9,1,3,6,2,5};
    int n=arr.size();
    
    for(int i=0;i<n-1;i++){
        int mn=arr[i];
        int index=i;
        for(int j=i;j<n ;j++)
        {
            if(arr[j]<mn){
            index=j;
            mn=arr[j];

        } 
        
        
    }
    swap(arr[index],arr[i]);

    }
        
        
    
        
    
    for(int i=0;i<=arr.size()-1;i++){
    cout<<arr[i]<<"";
}
    





}