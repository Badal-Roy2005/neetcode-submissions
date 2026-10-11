class Solution {
public:
int solve(vector<int>& a ,  vector<int>& dp,int i){
    if(i==0) return a[0];
    if(i == 1){
        return max(a[0] , a[1]);
    }
    if(dp[i] != 0) return dp[i];

    int q = solve(a , dp , i-1);
    int p = a[i] + solve(a , dp , i-2);
    return dp[i] = max(p , q);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0] , nums[1]);
        vector<int> dp(n , 0);
        solve(nums, dp , n - 1);
        return dp[n-1];
    }
};
