#include<bits/stdc++.h>
using namespace std;
int nums(string s)
{
    int ans=0;
    int num=0;
    int i=0;
    while(i<s.length())
    {
        int val=s[i]-'0';
        ans+=val;
        num=num*10+val;
        ans+=num;
    }
    return ans;
}


int main()
{
    string s="432";
    int ans=nums(s);
    cout<<ans<<endl;
}