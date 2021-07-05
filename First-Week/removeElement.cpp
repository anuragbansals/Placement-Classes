// https://leetcode.com/problems/remove-element/

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
    int value;
    cin>>value;
    int j = n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            while(j>i && arr[i]==arr[j])
                j--;
            swap(arr[i],arr[j]);
        }
        
    }
    int k = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            cout<<k;
            break;
        }
            
        else
            k++;
    }
    return 0;
}