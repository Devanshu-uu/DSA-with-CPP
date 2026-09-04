#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {5,4,3,6,2,1,0};
    int n=arr.size();
    for (int i=1;i<n;i=i+2){
        
        while(i>=1 && arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }

    for(int i=0;i<=arr.size()-1;i++){
    cout<<arr[i]<<"";
}

   
}
