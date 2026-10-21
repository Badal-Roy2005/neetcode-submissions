class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxi = a[0];
        int total = 0;
        int n = a.size();
        for(int i = 1;i < n;i++){
            if(a[i] > maxi){
                total += (a[i] - maxi);
                maxi = a[i];
            }
            else{
                maxi = a[i];
            }
        }
        return total;
    }
};