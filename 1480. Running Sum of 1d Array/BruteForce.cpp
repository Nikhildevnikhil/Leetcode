class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
         int n = nums.size();
         vector<int> sum(n);
         for(int i = 0 ; i < n ; i++){
             for(int j = 0 ; j <= i ; j++){
                 sum[i] += nums[j];
             }
         }
         return sum;
    }
};
