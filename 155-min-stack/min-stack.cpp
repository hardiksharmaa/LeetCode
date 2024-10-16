class MinStack {
public:
    vector<vector<int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        int minVal=getMin();
        if(st.empty()|| minVal>val){
            minVal=val;
        }
        st.push_back({val,minVal});
        
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.empty() ? -1 : st.back()[0];
    }
    
    int getMin() {
        return st.empty() ? -1 : st.back()[1]; 
    }
};
