// https://leetcode.com/problems/island-perimeter/
#include <bits/stdc++.h>
using namespace std;
int islandPerimeter(vector<vector<int>> &grid)
{
    int perimeter = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == 1)
            {
                perimeter += 4;
                if (i + 1 < rows && grid[i + 1][j] == 1)
                    perimeter--;
                if (i - 1 >= 0 && grid[i - 1][j] == 1)
                    perimeter--;
                if (j + 1 < cols && grid[i][j + 1] == 1)
                    perimeter;
                if (j - 1 >= 0 && grid[i][j - 1] == 1)
                    perimeter--;
            }
        }
    }
    return perimeter;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> grid;
    for (int i = 0; i < rows; i++)
    {
        vector<int> temp;
        int a;
        for (int j = 0; j < cols; j++)
        {
            cin >> a;
            temp.push_back(a);
        }
        grid.push_back(temp);
    }
    cout<<islandPerimeter(grid) << endl;
    return 0;
}