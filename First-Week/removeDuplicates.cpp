// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int index = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
            arr[index++] = arr[i];
    }
    cout<<index+1;

}