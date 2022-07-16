class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
       
        
        Hash map
        unordered_map<int,int> m;
        for(int i = 0 ; i < nums.size(); i++){
            m[nums[i]]++;
        }
        int count = 0;
        for(int i = 0 ;  i < nums.size() ; i++){
            // count+=m[nums[i]+k];
            // count+=m[nums[i]-k];
            count += m[nums[i] + k] + m[nums[i] - k];
         }
        return count/2;
        
       
    }
};
