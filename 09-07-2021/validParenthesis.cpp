#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int l = s.length();
    stack<char> st;
    for (int i = 0; i < l; i++)
    {
        if (st.empty() || s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if ((s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')
             || (s[i] == ')' && st.top() == '('))
        {
            st.pop();
        }
        else
            return false;
    }
    return st.empty();
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    if (isValid(s))
        cout << "true";
    else
        cout << "false";
}