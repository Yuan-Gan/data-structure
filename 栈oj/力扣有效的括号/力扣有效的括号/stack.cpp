class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto e : s)
        {
            if (e == '{' || e == '[' || e == '(') st.push(e);
            else
            {
                if (st.empty()) return false;
                if (st.top() == '[' && e != ']') return false;
                if (st.top() == '{' && e != '}') return false;
                if (st.top() == '(' && e != ')') return false;
                st.pop();
            }

        }
        return st.empty();
    }
};