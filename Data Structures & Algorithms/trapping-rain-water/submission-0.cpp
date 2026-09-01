class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        int i = 0;
        int j = n - 1;
        int Lmax = a[i];
        int Rmax = a[j];
        int ans = 0;
        while(i < j){
            if(a[i] <= a[j]){
                Lmax = max(Lmax , a[i]);
                ans += Lmax - a[i];
                i++;
            }
            else{
                Rmax = max(Rmax , a[j]);
                ans += Rmax - a[j];
                j--;
            }
        }
        

        return ans;
    }
};