// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
        
//         for (int i=0;i<=nums.size();i++){
//             bool flag= false;
//             for (int elem :nums){
//                 if(elem==i){
//                     flag=true;
//                     break;
//                 }}
//                 if(flag==false) return i;

        



         
//     }
//      return 0;
//     }
   
// };

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int sum=0;
//         int n=nums.size();
        
//         for (int i=0;i<nums.size();i++){
//            sum+=nums[i];}
//            long long n_sum=n*(n+1)/2;
//            sum=n_sum-sum;
//            return sum;

        
       
//     }
    
    
   
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        vector <bool> flag(n+1,false);
        for(int i=0;i<n;i++){
            flag[nums[i]]=true;
        }
        for (int i=0;i<=n;i++){
            if(flag[i]==false){
                return i;
            }
           
        }
         return 0;
    }
};