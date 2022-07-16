class Solution {
public:
    string sortSentence(string s) {
        string str;
        vector<string> v(10);
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 48 and s[i] <= 57){
                v[s[i] - '0'] = str + ' ';
                str="";
                i++;
            }
            else{
                str += s[i];
            }
        }
        string ans;
        for(string x: v){
            ans += x;
        }
        ans.pop_back();
        return ans;
    }
};
