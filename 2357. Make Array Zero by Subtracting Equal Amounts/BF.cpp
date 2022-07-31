class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        //     Brute Force    
        int count = 0;
        int x;
        for(int i = 0 ; i < nums.size() ; i++){
            sort(nums.begin(),nums.end());
            if(nums[i] > 0){
                x = nums[i];
                count++;
                for(int j = 0; j < nums.size() ; j++){
                    nums[j] -= x;
                }
            }
        }
        return count;
    }
};
