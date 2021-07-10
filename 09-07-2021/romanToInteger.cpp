/*I             1
V             5
X             10
L             50
C             100
D             500
M             1000*/
// https://leetcode.com/problems/roman-to-integer/
#include <bits/stdc++.h>
using namespace std;

int romanToInteger(string s)
{
    unordered_map<char, int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;
    int sum = map[s[s.length() - 1]];
    for (int i = s.length() - 2; i >= 0; i--)
    {
        if (map[s[i]] < map[s[i + 1]])
            sum -= map[s[i]];
        else
            sum += map[s[i]];
    }
    return sum;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    cout << romanToInteger(s);
}