class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int high = *max_element(a.begin() , a.end());
        cout << high ;
        int low = 1;
         int n = a.size();
        while(low < high){
            int mid = low + (high - low) / 2;
            int cal = 0;
            for(int i = 0 ;i < n;i++){
                cal += ((a[i] + mid - 1) / mid);
            }

            if(cal <= h){
                high = mid ;
            }
            else low = mid + 1;
        }

        return low;
    }
};
