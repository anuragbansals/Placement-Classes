#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int n)
{
    string ans = "";
    while (n > 0)
    {
        char c = 'A' + (n - 1) % 26;
        n = (n - 1) / 26;
        ans = c + ans;
    }
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cout << convertToTitle(n);
    return 0;
}