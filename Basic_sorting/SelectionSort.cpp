#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,4,9,7,3,2,6,5,8};
    int n=arr.size();
    
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i;j<n ;j++)
        {
            if(arr[j]<arr[index]){
            index=j;
            

        } 
        
        
    }
    swap(arr[index],arr[i]);

    }
        
        
    
        
    
    for(int i=0;i<=arr.size()-1;i++){
    cout<<arr[i]<<"";
}
    





}