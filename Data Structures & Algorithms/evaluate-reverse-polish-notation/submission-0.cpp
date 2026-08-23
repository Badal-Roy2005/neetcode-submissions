class Solution {
public:
    int evalRPN(vector<string>& t) {
     int ans = 0 ;
     int n = t.size();   
     stack<int> st;
     for(int i = 0 ; i < n;i++){
        if(t[i] == "*"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(a * b);
        }
        else if(t[i] == "/"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b / a);
        }
        else if(t[i] == "-"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b - a);
        }
        else if(t[i] == "+"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(a + b);
        }
        else{
            st.push(stoi(t[i]));
        }
     }
     return st.top();
    }
};
