#include <bits/stdc++.h>
using namespace std;
string find(string s1,string s2)
{
    string num1=s1;
    string ans="";
    reverse(num1.begin(),num1.end());
    //string num1=s1+num;
    for(int i=s1.length()-1;i>=0;i--)
    {
        int j=s1.length()-i-1;
        if(s1[i]==num1[j])
        {
            ans+=s1[i];
        }
        else{
            break;
        }
    }
    return ans;



}

int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string ans=find(s1,s1);
    cout<<ans<<endl;
}