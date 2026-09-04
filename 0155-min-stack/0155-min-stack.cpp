class MinStack {
    stack<int> st;
    stack<int> mst;
public:
    MinStack() { 
    }
    
    void push(int value) {
        st.push(value);
        if(mst.empty()) {
           mst.push(value);
        }else{
            mst.push(min(value,mst.top()));
        }
    }
    
    void pop() {
        st.pop();
        mst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
    }
};
