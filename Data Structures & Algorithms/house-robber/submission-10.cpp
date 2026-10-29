class Solution {
public:
int solve(vector<int>& a ,vector<int>& b, int i){
    if(i == 0) return a[0];
    if(i == 1) return max(a[0] , a[1]);
    if(b[i] != -1) return b[i];
    int l = a[i] + solve(a, b, i - 2);
    int r = solve(a, b, i - 1);
    return b[i] = max(l , r);
}
    int rob(vector<int>& a) {
        int n = a.size();
        if(n == 1) return a[0];
        if(n == 2) return max(a[0] , a[1]);
        vector<int> b(n , -1);
        return max(a[n - 1] + solve(a , b , n - 3) , solve(a , b , n - 2));
    }
};
