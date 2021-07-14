// https://leetcode.com/problems/counting-bits/
#include <bits/stdc++.h>
using namespace std;
int helper(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}
vector<int> countBits(int n)
{
    vector<int> res;
    for (int i = 0; i <= n; i++)
    {
        res.push_back(helper(i));
    }
    return res;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> res = countBits(n);
    for (auto i : res)
        cout << i << " ";
}