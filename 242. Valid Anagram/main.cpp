class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s == t) return true;
        // else return false;
        
        // using map
        if(s.size() != t.size()) return false;
        unordered_map<char,int> m;
        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto &count : m){
            if(count.second != 0) return false;
        }
        return true;
    }
};
