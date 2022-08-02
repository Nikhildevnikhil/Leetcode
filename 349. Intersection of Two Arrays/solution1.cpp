class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // using hashmap
        unordered_map<int,int> m;
        vector<int> v;
        for(int i = 0 ; i < nums1.size() ; i++){
            m[nums1[i]]++;
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            if(m[nums2[i]]){
                v.push_back(nums2[i]);
                m.erase(nums2[i]);
            }
        }
        return v;
    }
};
