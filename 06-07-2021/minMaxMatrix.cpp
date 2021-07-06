// https://leetcode.com/problems/lucky-numbers-in-a-matrix
// wrong

#include<bits/stdc++.h>
using namespace std;

int helperFunction(vector<vector<int >> &nums)
{   
    int rows = nums.size();
    int col = nums[0].size();
    vector<int> temp(rows);
    for(int i=0;i<rows;i++)
    {
        int minn = INT_MAX;
        for(int j=0;j<col;j++)
            minn = min(minn, nums[i][j]);
        temp.push_back(minn);
    }
    int k = temp.size();
    for(int i=0;i<col;i++)
    {
        int maxx = INT_MIN;
        for(int j=0;j<rows;j++)
            maxx = max(maxx, nums[j][i]);
        if(temp[i]==maxx)
            return temp[i];
    }
    return -1;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> nums;
    for(int i=0;i<n;i++)
    {
        vector<int> temp; int a;
        for(int j=0;j<m;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        nums.push_back(temp);
    }
    cout<<helperFunction(nums);
}