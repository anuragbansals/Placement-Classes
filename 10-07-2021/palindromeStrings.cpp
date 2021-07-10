// https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    transform(begin(s), end(s), begin(s), ::tolower);
    while (left <= right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
        }
        else if (!iswalnum(s[left]))
            left++;
        else if (!iswalnum(s[right]))
            right--;
        else
            return false;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);

    cout << (isPalindrome(s) ? "true" : "false");
}