// https://leetcode.com/problems/flipping-an-image/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            reverse(begin(image[i]),end(image[i]));
            for(int j=0;j<image[i].size();j++)
            {
                image[i][j] = 1 - image[i][j];
            }
        }
        return image;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<vector<int> > image;
    int a;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            temp.push_back(a);
        }
        image.push_back(temp);
    }
    vector<vector<int > > res = flipAndInvertImage(image);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }

}