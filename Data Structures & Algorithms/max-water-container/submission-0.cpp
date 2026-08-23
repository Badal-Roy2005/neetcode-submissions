class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size() ;
        int i = 0 ;
        int j = n - 1;
        int max_area = 0;
        while(i < j){
            max_area = max(max_area,min(a[i] ,a[j]) * (j - i));
            if(a[i] < a[j])i++;
            else j--;
        }
        return max_area;
    }
};
