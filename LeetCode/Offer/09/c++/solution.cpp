class CQueue {
public:
    stack<int> stack1,stack2;
    CQueue() {

    }
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if(stack1.empty()&&stack2.empty()) {
            return -1;
        }
        if(stack2.empty()) {
            while(!stack1.empty()) {
                int value = stack1.top();
                stack1.pop();
                stack2.push(value);
            }
        }
        int ans = stack2.top();
        stack2.pop();
        return ans;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */