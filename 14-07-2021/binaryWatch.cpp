// https://leetcode.com/problems/binary-watch/
#include<bits/stdc++.h>
using namespace std;

vector<string> readBinaryWatch(int turnedOn) {
        vector<string> time;
        for(int i=0;i<12;i++)
        {
            bitset<4> hour(i);
            for(int j=0;j<60;j++)
            {
                bitset<6> min(j);
                if(hour.count()+min.count()==turnedOn){
                    string h = to_string(i);
                    string m = (j<10)?":0":":";
                    m = m + to_string(j);
                    time.push_back(h+m);
                }
                
            }
            
        }
        return time;
    }


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<string> res = readBinaryWatch(n);

    for(string ele: res)
        cout<<ele<<" ";
}