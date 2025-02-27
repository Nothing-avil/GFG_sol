class Solution {
  public:
    stack<int> s, a;
    Solution() {
    }

    // Add an element to the top of Stack
    void push(int x) {
        if(s.empty() && a.empty()){
            s.push(x);
            a.push(x);
            return;
        }
        a.push(x);
        if(s.top() > x){
            s.push(x);
        }
    }

    // Remove the top element from the Stack
    void pop() {
        if(a.empty()){
            return;
        }
        if(a.top() == s.top()){
            s.pop();
        }
        a.pop();
    }

    // Returns top element of the Stack
    int peek() {
        if(a.empty()){
            return -1;
        }
        return a.top();
    }

    // Finds minimum element of Stack
    int getMin() {
        if(s.empty()){
            return -1;
        }
        return s.top();
    }
};
