// https://leetcode.com/problems/reverse-vowels-of-a-string/
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    if (
        c == 'a' || c == 'A' || 
        c == 'e' || c == 'E' || 
        c == 'i' || c == 'I' || 
        c == 'o' || c == 'O' || 
        c == 'u' || c == 'U'
    )
        return true;
    return false;
}
string reverseVowels(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (isVowel(s[left]) && isVowel(s[right]))
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        else if (isVowel(s[left]))
            right--;
        else if (isVowel(s[right]))
            left++;
        else
        {
            left++;
            right--;
        }
    }
    return s;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    cout << reverseVowels(s);
    return 0;
}