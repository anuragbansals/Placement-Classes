// https://leetcode.com/problems/missing-number/
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n*(n+1))/2;

    for(int i=0;i<n;i++)
        sum = sum - nums[i];
    return sum;        
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<missingNumber(arr);
}