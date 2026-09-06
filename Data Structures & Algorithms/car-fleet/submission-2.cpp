class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<float,float>> a(n);
        stack<int> st;
        for(int i = 0 ;i <n;i++){
            a[i].first = position[i];
            a[i].second = speed[i];
        }
        sort(a.begin() , a.end());

        for(int i = 0 ; i < n;i++){
            float cal = ((target - a[i].first)) / a[i].second;
            if(st.empty()){
                st.push(i);
            }
            else{
                while(!st.empty() && cal >= (((target - a[st.top()].first)) / a[st.top()].second)){
                    st.pop();
                }
                st.push(i);
            }
        }
        return st.size();
    }
};
