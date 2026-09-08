class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int i = 0;
        int j = a.size() - 1;
        while(i <= j){
            int mid = i + (j - i) / 2;
            if(a[mid][a[0].size()-1] == target) return true;
            if(a[mid][a[0].size() - 1] <= target) i = mid + 1;
            else j = mid - 1;
        }
        if(i > a.size() - 1) return false;
        cout << i << endl;
        
        int low = 0;
        int high = a[0].size() - 1;
        while(low <= high){
            int mid = low + ((high - low) / 2);

            if(a[i][mid] == target) return true;
            else if(a[i][mid] > target) high = mid - 1;
            else low = mid + 1;
        }

        return false;
    }
};
