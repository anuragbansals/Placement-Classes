// https://leetcode.com/problems/ransom-note/

#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string a, string b) {
        int freq[26] = {0};
        
        for(int i=0;i<b.length();i++)
            freq[b[i]-'a']++;
        for(int i=0;i<a.length();i++)
        {
            if(freq[a[i]-'a']==0)
                return false;
            else
                freq[a[i]-'a']--;
        }
        return true;
    }

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string a,b;
    cin>>a>>b;
    if(canConstruct(a,b))
        cout<<"true";
    else
        cout<<"false";
}
