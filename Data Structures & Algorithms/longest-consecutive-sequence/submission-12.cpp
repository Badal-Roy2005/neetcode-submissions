class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        unordered_map<int,int> mp;
        for(auto &it : a) mp[it] = 1;
        int n = a.size();
        int maxi = 0;
        for(int i = 0 ;i < n;i++){
            if(mp[a[i]] == 1){
                int count = 1;
                int cur = a[i] - 1;
                while(mp[cur] == 1){
                    mp[cur] = 0;
                    cur--;
                    count++;
                }
                cur = a[i] + 1;
                while(mp[cur] == 1){
                    mp[cur] = 0;
                    cur++;
                    count++;
                }

                maxi = max(maxi , count);
            }
        }
        return maxi ;
    }
};
