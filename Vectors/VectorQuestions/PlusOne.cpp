class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        vector <int> arr;
        for(int i =digits.size()-1;i>=0;i--){
            int sum=digits[i]+carry;
            if(sum==10){
                carry=1;
                arr.push_back(0);

                
            }
            else{
                carry=0;
                arr.push_back(sum);

            }
            
            }
            if(carry==1) arr.push_back(1);
            reverse(arr.begin(),arr.end());
            return arr;

        }


        };
        
