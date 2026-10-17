class Solution {
public:
    vector<int> countBits(int n) {
        if(n == 0) return {0};
        vector<int> ans(n + 1 , 0);
        ans[1] = 1;
        for(int i = 2; i <= n;i++){
            int count = ans[i / 2];
            if(i & 1) count++;
            ans[i] = count;
        }
        return ans;

    }
};
