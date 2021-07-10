#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    if (strs.size() == 0)
        return ans;
    int index = 0;
    for (char c : strs[0])
    {
        for (int i = 1; i < strs.size(); i++)
        {
            if (c != strs[i][index])
                return ans;
        }
        ans = ans + c;
        index++;
    }
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<string> v;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    cout << longestCommonPrefix(v);
    return 0;
}