#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.length() - 1, j = b.length() - 1;
    int sum = 0;
    string ans;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {
        if (i >= 0)
            sum = (a[i] - '0');
        if (j >= 0)
            sum += (b[j] - '0');
        sum = sum + carry;
        ans = ans + (sum & 1 ? "1" : "0");
        carry = sum / 2;
        sum = 0;
        i--;
        j--;
    }
    if (carry)
        ans += (carry + '0');
    reverse(begin(ans), end(ans));
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b);
    return 0;
}