// https://leetcode.com/problems/single-number/

#include<bits/stdc++.h>
using namespace std;
int singleInteger(int *arr, int n)
{
    sort(arr,arr+n);
    if(arr[0]!=arr[1])
        return arr[0];
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
            return arr[i];
    }
    return arr[n-1];
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