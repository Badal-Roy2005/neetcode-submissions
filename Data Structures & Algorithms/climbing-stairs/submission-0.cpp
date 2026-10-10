class Solution {
public:
    int climbStairs(int n) {

        int a = 0 ;
        int b = 1 ;
        if(n == 1) return 1;
        int ans = 0;
        while(n){
            int c = a + b;
            ans = c;
            a = b; 
            b = c;
            n--;
        }
        return ans;
    }
};
