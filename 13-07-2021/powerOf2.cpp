// https://leetcode.com/problems/power-of-two/

#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
        int count = 0;
        if(n<0)
            return false;
        while(n)
        {
            if(n&1)
                count++;
            n = n>>1;
        }
        return count==1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;

    cout<<isPowerOfTwo(n);
}