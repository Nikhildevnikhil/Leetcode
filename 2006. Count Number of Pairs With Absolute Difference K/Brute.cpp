class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        //Brute Force(O(n^2) and O(1))
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i + 1 ; j < nums.size() ; j++){
                if(abs(nums[i] - nums[j]) == k and i < j){
                    count++;
                }
            }
        }
        return count;
    }
}
