class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<pair<int, string>> p(n.size());

        for(int i = 0 ;i < n.size();i++){
            p[i].first = h[i];
            p[i].second = n[i];
        }
        sort(p.rbegin() , p.rend());
        vector<string> ans;
        for(int i = 0 ;i < p.size();i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};