// https://leetcode.com/problems/single-number/

#include<bits/stdc++.h>
using namespace std;
int singleInteger(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int c = 0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
                c++;
        }
        if(c==1)
            return arr[i];
    }
    return 0;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<singleInteger(arr, n);
}