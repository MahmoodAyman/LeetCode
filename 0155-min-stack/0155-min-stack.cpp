class MinStack {
private:
    stack<int>st,prefix_min;
public:
    MinStack() { 
    }
    void push(int val) {
        st.emplace(val);
        if(!prefix_min.empty()){
            prefix_min.emplace(min(prefix_min.top(),val));    
        }else{
            prefix_min.emplace(val);
        }
    }
    
    void pop() {
        prefix_min.pop();
        st.pop();
    }
    int top() {
        return st.top(); 
    }
    
    int getMin() {
        return prefix_min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */