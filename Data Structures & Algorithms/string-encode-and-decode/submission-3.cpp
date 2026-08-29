class Solution {
public:

    string encode(vector<string>& s) {
        string en = "";
        for(auto it : s){
            en += to_string(it.length());
            en += '#';
            en += it ;
        }
        return en;
    }

    vector<string> decode(string s) {
        int n = s.length();
        int j = 0;
        vector<string> ans;
        while(j < n){
            int i = j;
            string len = "";
            while(i < n && s[i] != '#'){
                len += s[i];
                i++;
            }
            int range = stoi(len);
            string cur = s.substr(i + 1, range);
            ans.push_back(cur);
            j = (i + range + 1);
        }
        
        return ans;
    }
};
