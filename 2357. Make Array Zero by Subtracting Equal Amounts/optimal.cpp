class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // using set
        unordered_set<int> s;
        for(auto x : nums){
            if(x > 0) s.insert(x);
        }
        return s.size();
    }
};
