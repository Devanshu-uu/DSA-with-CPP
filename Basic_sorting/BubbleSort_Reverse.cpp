#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr={5,4,3,2,6,1};
    int n=arr.size();
    for(int j=0;j<n-1;j++){
        int swaps=0;
        for(int i=n-1-j;i>=1;i--){
            if(arr[i]<arr[i-1]) {
                swap(arr[i],arr[i-1]);
                // swaps++;
        }
        // if(swaps==0) break;
    }
    
    
}
for(int i=0;i<=arr.size()-1;i++){
    cout<<arr[i]<<"";
}

}

    
    
