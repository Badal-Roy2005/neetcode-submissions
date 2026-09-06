class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack<int> st;
        int n = a.size();
        vector<int> next_min(n);
        vector<int> pre_min(n);
        for(int i = n - 1; i >= 0 ; i--){
            int cur = a[i];
            while(!st.empty() && a[st.top()] >= cur) st.pop();
            if(st.empty()) next_min[i] = i;
            else next_min[i] = st.top();
            
            st.push(i);
        }
        stack<int> sp;
        for(int i = 0 ;i < n;i++){
            int cur = a[i];
            while(!sp.empty() && a[sp.top()] >= cur) sp.pop();
            if(sp.empty()) pre_min[i] = i;
            else pre_min[i] = sp.top();
            sp.push(i);
        }
        int maxi = INT_MIN;
        for(int i = 0 ;i < n;i++){
            int l = 0;
            int r = n - 1;
            if(next_min[i] != i) r = next_min[i] - 1;
            if(pre_min[i] != i) l = pre_min[i] + 1 ;
            maxi = max(maxi , (r - l + 1) * a[i]);
        }

        return maxi;
    }
};
