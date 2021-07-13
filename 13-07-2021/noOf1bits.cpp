// https://leetcode.com/problems/number-of-1-bits/

#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
        int count = 0;
        while(n)
        {
            if(n&1)
                count++;
            n = n>>1;
        }
        return count;
    }

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    uint32_t n;
    cin>>n;

    cout<<hammingWeight(n);
}