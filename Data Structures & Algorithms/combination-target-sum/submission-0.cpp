class Solution {
public:
void solve(vector<int>& nums ,vector<vector<int>>& ans ,vector<int>& temp,int sum, int target,int start){
    if(sum == target){
        ans.push_back(temp);
        return;
    }
    if(sum > target){
        return ;
    }

    for(int i = start ;i < nums.size();i++){
        temp.push_back(nums[i]);
        solve(nums , ans , temp , sum + nums[i] , target, i);
        temp.pop_back();
    }
}

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
       vector<int> temp;
       vector<vector<int>> ans;
       solve(nums , ans , temp, 0 , target, 0); 
       return ans;
    }
};
