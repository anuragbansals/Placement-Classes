//https://leetcode.com/problems/transpose-matrix/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int> > res(matrix[0].size(), vector<int>(matrix.size(), 0));
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
                res[j][i] = matrix[i][j];
        }
        return res;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<vector<int> > matrix;
    int a;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    vector<vector<int > > res = transpose(matrix);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
}