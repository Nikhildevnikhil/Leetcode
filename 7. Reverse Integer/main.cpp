class Solution {
public:
    int reverse(int x) {
        int rem = 0; 
        long long rev = 0;
        while(x != 0){
            rem = x % 10;
            x = x / 10;
            rev = rev * 10 + rem;  
        }
        return (rev < INT_MIN || rev > INT_MAX) ? 0 : rev;
    }
};
