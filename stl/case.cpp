#include<iostream>
using namespace std;
void ans(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'A')
        {
            s[i]='&&';
        }
        else if(s[i] == 'B')
        {
            s[i]='|';
        }
        else if(s[i]=='C')
        {
            s[i]='^';
        }

    }
}

int main()
{
    string s;
    cin>>s;
    ans(s);
}