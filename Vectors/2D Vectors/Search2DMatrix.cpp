// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& arr, int target) {
//         int m=arr.size(),n=arr[0].size();
//         for(int j=n-1;j>=0;j--){
//             if(arr[0][j]<=target){
//                 for(int i=0;i<m;i++){
//                     if(arr[i][j]==target){
//                         return true;
//                     }
//                 }
//                 }
//             }
        
        
//             return false;
//     }
// };


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m=arr.size(),n=arr[0].size();
        int i=0,j=n-1;
        while(i<m && j>=0){
            if(arr[i][j]>target) j--;
            else if(arr[i][j]<target) i++;
            else return true;
        }
        return false;

        
    }
};