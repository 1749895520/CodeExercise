class MyStack {
    Queue<Integer> q = new LinkedList<>();
    int top = 0;
    public MyStack() {
    }
    
    public void push(int x) {
        q.add(x);
        top = x;
    }
    
    public int pop() {
        int size = q.size();
        while(size-->2){
            q.add(q.remove());
        }
        top = q.peek();
        q.add(q.remove());
        return q.remove();
    }
    
    public int top() {
        return top;
    }
    
    public boolean empty() {
        return q.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */