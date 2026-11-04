class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int len = nums.size();
        int low = 0;
        int high = len - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == x) return mid;
            else if(nums[mid] < x) low = mid + 1;
            else high = mid - 1;
        }

        return low;
    }
};