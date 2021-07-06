// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

#include<bits/stdc++.h>
using namespace std;
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows = mat.size(), col = mat[0].size();
        set<pair<int, int> > st;
        for(int i=0;i<mat.size();i++)
        {
            int left = 0, right = col-1, ind = col;
            while(left<=right)
            {
                int mid = (left+right)/2;
                if(mat[i][mid]==0)
                {
                    ind = mid;
                    right = mid-1;
                }
                else if(mat[i][mid]==1)
                    left = mid + 1;
            }
            st.insert({ind,i});
        }
        vector<int> res;
        for(auto it = begin(st); k>0; it++, k--)
        {
            res.push_back(it->second);
        }
        return res;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m,n, k;
    cin>>m>>n;
    vector<vector< int>>  mat;
    for(int i=0;i<m;i++)
    {
        vector<int> temp; int a;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        mat.push_back(temp);
    }
    cin>>k;
    vector<int> res = kWeakestRows(mat,k);
    for(int ele:res)
        cout<<ele<<" ";
    return 0;
}