class MinStack {
stack<int> st , min_st;
public:
    
    void push(int val) {
    st.push(val);
    if(min_st.empty()){
        min_st.push(val);
        return ;
    }
    min_st.push(min(val , min_st.top()));    
    }
    
    void pop() {
     st.pop();
     min_st.pop();   
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
