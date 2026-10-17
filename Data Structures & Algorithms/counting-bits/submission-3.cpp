class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1 , 0);
        for(int i = 0; i <= n;i++){
            int count = ans[i / 2];
            if(i & 1) count++;
            ans[i] = count;
        }
        return ans;

    }
};
