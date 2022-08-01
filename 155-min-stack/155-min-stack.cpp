class MinStack {
public:
    stack<long> s;
    long mn;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            mn=val;
        } 
        else if(val<= mn)
        {
            s.push(2ll*val-mn );
            mn=val;
        }
        else
        {
            s.push(val);
        }
    }
    
    void pop() {
        if(s.top()< mn)
        {
            mn= 2ll*mn- s.top();
            s.pop();
        }
        else
            s.pop();
        
        
    }
    
    int top() {
        if(s.top()< mn)
        {
            return  mn;
            
        }
        else
            return s.top();
        
    }
    
    int getMin() {
        return mn;
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