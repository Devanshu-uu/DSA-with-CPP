#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr={5,4,3,2,1,6,7,0};
    int n=arr.size();
    for(int j=0;j<n-1;j++){
        int swaps=0;
        for(int i=0;i<n-1-j;i++){
            if(arr[i]>arr[i+1]) {
                swap(arr[i],arr[i+1]);
                swaps++;
        }
    }
    if(swaps==0) break;
    
    
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<"";
}

}

    
    
