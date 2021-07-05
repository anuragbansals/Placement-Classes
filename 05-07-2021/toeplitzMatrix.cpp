//https://leetcode.com/problems/toeplitz-matrix/

#include<bits/stdc++.h>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0; j<matrix[0].size();j++)
            {
                if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j])
                    return false;
            }
        }
        return true;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int rows,col;
    cin>>rows>>col;
    vector<vector<int> > matrix;
    int a;
    for(int i=0;i<rows;i++)
    {
        vector<int> temp;
        for(int j=0;j<col;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        matrix.push_back(temp);
    }
    
    if(isToeplitzMatrix(matrix))
        cout<<"true";
    else
        cout<<"false";
}