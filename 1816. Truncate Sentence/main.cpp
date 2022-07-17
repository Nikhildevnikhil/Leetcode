class Solution {
public:
    string truncateSentence(string s, int k) {
        string str;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' ') count++;
            if(count < k) str += s[i];
            else break;
        }
        return str;
    }
};
