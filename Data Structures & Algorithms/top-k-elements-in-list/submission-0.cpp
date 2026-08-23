class Solution {
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        // count the frequency
        int n = a.size();
        unordered_map<int,int>mp;
        for(auto it : a)mp[it]++;
        vector<vector<int>> vec(n+1);

        for(auto &it : mp){
            vec[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i = n ; i >= 0 ;i--){
            if(vec[i].size() > 0 && k){
                for(auto &it :vec[i]) ans.push_back(it);
                k-=vec[i].size();
            }
        }

        return ans;
         
    }
};