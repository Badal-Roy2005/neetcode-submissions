class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cur = 0;
        int count = 0;

        for(auto &it : nums){
            if(count == 0) cur = it;
            if(it != cur){
                count--;
            }
            else count++;
        }
        return cur;
    }
};