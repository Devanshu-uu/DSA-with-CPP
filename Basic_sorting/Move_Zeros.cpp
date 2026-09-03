#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {9,-2,0,0,-4,6,0,7,0};
    int n=arr.size();

    for(int j=0;j<n-1;j++){

        for(int i=0;i<n-1;i++){
            if(arr[i]==0 ) swap(arr[i],arr[i+1]);
        }
    }
    
    for(int i=0;i<=arr.size()-1;i++){
    cout<<arr[i]<<"";
}
}