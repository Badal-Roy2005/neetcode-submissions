class Solution {
public:
    int rob(vector<int>& a) {
        int n = a.size();
        if(n == 1) return a[0];
        int c = a[0];
        int d = max(a[0] , a[1]);
        for(int i = 2;i < n;i++){
            int p = d;
            int q = a[i] + c;
            int cur = max(p , q);
            c = d;
            d = cur;
         }
        return d;
    }
};
