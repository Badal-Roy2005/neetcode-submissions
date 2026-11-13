class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> mp;
        for(int i = 0 ;i < 26;i++){
            mp[order[i]] = i;
        }

        int n = words.size();
        for(int i = 0 ;i < n - 1;i++){
            int j = 0;
            while(j < words[i].size() && j < words[i+1].size() && words[i][j] == words[i+1][j]){
                j++;
            }
            if(j == words[i+1].size()) return false;
            if(j == words[i].size() || j == words[i+1].size())
                continue;

            if(mp[words[i][j]] > mp[words[i+1][j]]) return false;
        }
        return true;

    }
};