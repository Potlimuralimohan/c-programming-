#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int num1=1;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num1<<" ";
            num1++;
        }
        cout<<endl;
    }
}