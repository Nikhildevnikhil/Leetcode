class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(auto word : words){
            string str;
            for(auto morse: word){
                str += v[morse - 'a'];  
            }
            s.insert(str);
        }
        return s.size();
    }
};
