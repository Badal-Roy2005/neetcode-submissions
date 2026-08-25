class Solution {
public:
    int search(vector<int>& a, int target) {
        int i = 0;
        int j = a.size() - 1;
        while(i <= j){
            int mid = ((j + i) / 2);
            if(a[mid] == target) return mid;
            else if(a[mid] < target)i = mid + 1;
            else j = mid - 1;
        }
        return -1;
    }
};
