class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int spaceCount;
        int ans = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            spaceCount = 1;
            for(int j = 0 ; j < sentences[i].length(); j++){
                if(sentences[i][j] == ' ') spaceCount++;
            }
            ans = max(spaceCount,ans);
        }
       return ans;
    }
};
