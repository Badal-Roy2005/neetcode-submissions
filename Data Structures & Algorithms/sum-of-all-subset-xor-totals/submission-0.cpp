class Solution {
public:
void solve(vector<int> &a,vector<int>& temp, int& ans , int start){
        int t = 0;
        for(auto &it : temp) t ^= it;
        ans += t;
    for(int i = start ; i < a.size() ;i++){
        temp.push_back(a[i]);
        solve(a , temp , ans , i + 1);
        temp.pop_back();
        
    }
}
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        int ans = 0 ;
        solve(nums , temp , ans , 0);
        return ans;
    }
};