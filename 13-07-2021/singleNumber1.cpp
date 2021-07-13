// https://leetcode.com/problems/single-number/

#include<bits/stdc++.h>
using namespace std;
int singleInteger(int *arr, int n)
{
    if(n==0)
        return 0;
    int ans = 0;
    for(int i=0;i<n;i++)
        ans = ans^arr[i];
    return ans;
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