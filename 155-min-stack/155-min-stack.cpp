class MinStack {
public:
    MinStack() {
        
       // MinStack MinStack=new MinStack();
        
    }
    
    void push(int val) {
        if (stack.empty())
      stack.emplace(val,val);
    else
      stack.emplace(val, min(val, stack.top().second));
    }
    
    void pop() {
        
        stack.pop();
        
    }
    
    int top() {
        
        return stack.top().first;
;        
    }
    
    int getMin() {
        
        return stack.top().second;
        
    }
    private:
    stack<pair<int, int>> stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */