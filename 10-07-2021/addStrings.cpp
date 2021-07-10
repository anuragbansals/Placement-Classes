// https://leetcode.com/problems/add-strings/
#include <bits/stdc++.h>
using namespace std;
int main();

string addStrings(string num1, string num2)
{
    int i = num1.length() - 1, j = num2.length() - 1;
    int sum, carry = 0;
    string ans;
    while (i >= 0 || j >= 0)
    {
        sum = 0;
        if (i >= 0)
            sum = num1[i] - '0';
        if (j >= 0)
            sum += num2[j] - '0';
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        ans += to_string(sum);
        i--; j--;
    }
    if (carry)
        ans += to_string(carry);
    reverse(begin(ans), end(ans));
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string num1, num2;
    cin >> num1 >> num2;
    cout << addStrings(num1, num2);
    return 0;
}