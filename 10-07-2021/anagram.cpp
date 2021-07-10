#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    int freq[26] = {0};
    if (s.length() != t.length())
        return false;
    for (int i = 0; i < s.length(); i++)
        freq[s[i] - 'a']++;
    for (int i = 0; i < t.length(); i++)
    {
        if (freq[t[i] - 'a'] == 0)
            return false;
        else
            freq[t[i] - 'a']--;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s, t;
    cin >> s >> t;
    if (isAnagram(s, t))
        cout << "true";
    else
        cout << "false";
}