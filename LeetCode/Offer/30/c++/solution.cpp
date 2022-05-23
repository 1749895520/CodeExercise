class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> mainStack,minStack;
    MinStack() {
        minStack.push(INT_MAX);
    }
    
    void push(int x) {
        mainStack.push(x);
        minStack.push(::min(x,minStack.top()));
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int min() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */