#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {5,4,3,6,2,1,0};
    int n=arr.size();
    for (int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0;i<=arr.size()-1;i++){
    cout<<arr[i]<<"";
}

   
}
