class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini = a[0];
        int maxi = 0;
        for(int i = 1; i < a.size() ;i++){
            if(a[i] > mini){
                maxi = max(maxi , a[i] - mini);
            }
            else{
                mini = a[i];
            }
        }
        return maxi;
    }
};
