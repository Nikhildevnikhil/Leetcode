class Solution {
public:
    int fib(int n) {
         //By recursion
         if(n <= 1) return n;
         return fib(n-1) + fib(n-2);
    }
};
