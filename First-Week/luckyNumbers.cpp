#include<bits/stdc++.h>
using namespace std;
vector<int> luckyNumbers (vector<vector<int>>& arr) {
        int rows = arr.size();
        int cols = arr[0].size();
        
        for(int i=0;i<rows;i++)
        {
            int minn = INT_MAX, index;
            for(int j=0;j<cols;j++)
            {
                if(minn > arr[i][j])
                {
                    minn = arr[i][j];
                    index = j;
                }
            }
            int maxx = -1;
            for(int j=0;j<rows; j++)
            {
                maxx = max(maxx,arr[j][index]);
            }
            if(maxx==minn)
                return {maxx};
        }
        return {};
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m, n;
    cin>>n>>m;
    vector<vector<int > > arr;
    for(int i=0;i<n;i++)
    {
        vector<int> temp; int a;
        for(int i=0;i<m;i++)
        {
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }

    vector<int> res = luckyNumbers(arr);
    cout<<endl;
    for(auto ele: res)
        cout<<ele<<" ";
    return 0;
}