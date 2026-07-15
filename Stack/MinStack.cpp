// Min Stack.

#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
        
    }
    
    void push(int value) {

        if(st.empty()) {
            st.push(value);
            minSt.push(value);
            return;
        }

        st.push(value);

        if(value <= minSt.top()) {
            minSt.push(value);
        }
    }
    
    void pop() {

        if(minSt.top() == st.top()) {
            minSt.pop();
        }

        st.pop();
        return;
    }
    
    int top() {

        int n = st.top();
        return n;
        
    }
    
    int getMin() {

        int min = minSt.top();
        return min;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {

}