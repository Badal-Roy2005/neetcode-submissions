class Solution {
public:
int solve(vector<int>& a , int i , int size, vector<int>& dp){
    if(i >= size) return 0;
    if(dp[i] != -1) return dp[i];
    int l = solve(a , i + 1 , size,dp);
    int r = solve(a , i + 2 , size,dp);

    return dp[i] = min(l + a[i] , r + a[i]);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n , -1);
        return min(solve(cost , 0 , n , dp) , solve(cost , 1 , n , dp));
    }
};
