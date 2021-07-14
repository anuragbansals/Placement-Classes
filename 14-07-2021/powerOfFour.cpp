// https://leetcode.com/problems/power-of-four/

#include <bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n)
{
    if (n == 1)
        return true;
    else if (n == 0)
        return false;
    while (n)
    {
        if (n % 4 != 0)
            return false;
        n = n / 4;
        if (n == 1)
            return true;
    }
    return true;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cout<<isPowerOfFour(n);
}