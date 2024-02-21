#include<iostream>
using namespace std;
int main()
{
    string num="take u forward Is awesome";
    //cin>>num;
    for(int i=0;i<num.length();i++)
    {
        if( i==0 || i==num.length()-1)
        {
            num[i]=toupper(num[i]);
        }
        else if(num[i] ==' ')
        {
            num[i-1]=toupper(num[i-1]);
            num[i+1]=toupper(num[i+1]);
        }
    }
    cout<<num;
}