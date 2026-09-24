#include <bits/stdc++.h>
using namespace std;

int priority(char ch) {
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
        
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (isalnum(ch)) {
            ans += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }

        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else {
            while (!st.empty() && priority(st.top()) >= priority(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main() {
    string s = "(3+4)*2";

    cout << "Infix is : " << s << endl;
    cout << "Postfix is : " << infixToPostfix(s) << endl;
    return 0;
}