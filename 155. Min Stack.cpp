class MinStack {
public:
   

    void push(int x) {
        nums.push(x);
        if(minStack.empty() || (!minStack.empty()&& x <= minStack.top()))
            minStack.push(x);
    }

    void pop() {
        if(!nums.empty())
        {
            if (nums.top() == minStack.top()) {
            minStack.pop();
        }
            nums.pop();
        }
    }

    int top() {
        return nums.top();
    }

    int getMin() {
        return minStack.top();
    }    
protected:
    stack<int> nums;
    stack<int> minStack;
};