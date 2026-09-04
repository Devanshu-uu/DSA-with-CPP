// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> arr = {5,4,3,2,6,1};
//     int n = arr.size();

//     int k = 3;
//     int mn = 0;

//     int* ptr = &mn;

//     for(int i = 0; i < k; i++) {
//         int index = i;

//         for(int j = i; j < n; j++) {
//             if(arr[j] < arr[index]) {
//                 index = j;
//             }
//         }

//         mn = arr[index];
//         swap(arr[index], arr[i]);
//     }

//     cout << *ptr;
// }


class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        int n=arr.size();

        for(int i=0;i<k;i++){
            int index=i;
            int mn=arr[i];
            for(int j=i;j<n ;j++)
            {
                if(arr[j]<arr[index]){
                index=j;
                mn=arr[j];


            } 


        }
        swap(arr[index],arr[i]);

        }
        return arr[k-1];
        
    }
};