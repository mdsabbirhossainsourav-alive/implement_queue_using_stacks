class MyQueue {
public:
    stack<int> st;

    MyQueue() {
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> st2;
        int val;

        while(st.size() > 1)
        {
            st2.push(st.top());
            st.pop();
        }

        val = st.top(); 
        st.pop();

        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }

        return val;
    } 
    
    int peek() {
        stack<int> st2;
        int val;

        while(st.size() > 1)
        {
            st2.push(st.top());
            st.pop();
        }

        val = st.top(); 

        while(!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }

        return val;
    }
    
    bool empty() {
        return st.empty();
    }
};
