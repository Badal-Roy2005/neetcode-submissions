class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<int> s;
        vector<int> r(n);
        int j = n - 1;
        r[j] = 0;
        s.push(j--);

        while(j >= 0){
            int count = 1;
            int i = s.top();
            while(!s.empty() && t[s.top()] <= t[j]){
                count += r[s.top()];
                s.pop();
            }
            if(s.empty()) r[j] = 0;
            else r[j] = count; 
            s.push(j--);
        }
        return r;


    }
};
