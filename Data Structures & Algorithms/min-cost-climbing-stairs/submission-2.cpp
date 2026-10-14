class Solution {
public:
// int solve(vector<int>& a , int i , int size, vector<int>& dp){
//     if(i >= size) return 0;
//     if(dp[i] != -1) return dp[i];
//     int l = solve(a , i + 1 , size,dp);
//     int r = solve(a , i + 2 , size,dp);

//     return dp[i] = min(l + a[i] , r + a[i]);
// }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int a = cost[n-1];
        int b = cost[n-2];

        for(int i = n - 3; i >= 0 ;i--){
            int c = min(a + cost[i] , b + cost[i]);
            a = b;
            b = c;
        }
        int ans = b;
        a = cost[n-1];
        b = cost[n-2];
        
        for(int i = n - 3; i >= 1 ;i--){
            int c = min(a + cost[i] , b + cost[i]);
            a = b;
            b = c;
        }
        return min(ans , b);
    }
};
