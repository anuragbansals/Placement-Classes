// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i; j < mat.size(); j++)
            swap(mat[i][j], mat[j][i]);
    }
    for (int i = 0; i < mat.size(); i++)
        reverse(begin(mat[i]), end(mat[i]));
}
bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    int n = 4;
    while (n--)
    {
        rotate(mat);
        if (mat == target)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int a;
        for (int j = 0; i < n; j++)
        {
            cin >> a;
            temp.push_back(a);
        }
        mat.push_back(temp);
    }
    vector<vector<int>> target(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int a;
        for (int j = 0; i < n; j++)
        {
            cin >> a;
            temp.push_back(a);
        }
        target.push_back(temp);
    }
    if (findRotation(mat, target))
        cout << "true";
    else
        cout << "false";
}