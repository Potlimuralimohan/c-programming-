#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string name;
    cin>>name;
    stack<int>s;
    string ans="";
    for(int i=0;i<name.length();i++)
    {
        char num=name[i];
        s.push(num);
    }

    while(!s.empty())
    {
        char num1=s.top();
        ans.push_back(num1);
        s.pop();

    }
    cout<<ans<<endl;
}