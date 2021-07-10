#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
    unordered_map<int, int> mp;
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] % 2 == 0)
        {
            res += mp[s[i]];
            mp[s[i]] = 0;
        }
    }
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            res++;
            break;
        }
    }
    return res;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    cout << longestPalindrome(s);
    return 0;
}