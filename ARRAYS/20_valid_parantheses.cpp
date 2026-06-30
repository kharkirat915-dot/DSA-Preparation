#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                if ((ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    if (obj.isValid(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}