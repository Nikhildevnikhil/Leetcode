class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n / 2; j++){
                swap(image[i][j],image[i][n - 1 - j]); 
            }  
        }
         
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                image[i][j] = (image[i][j] == 0) ? 1 : 0;
            }  
        }
        return image;
    }
};
