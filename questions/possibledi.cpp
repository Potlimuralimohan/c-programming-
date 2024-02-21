#include<iostream>
using namespace std;

int biocom(int a, int b)
{
    int res=1;
    if(b>a-b)
    {
        b=a-b;
    }
    for(int i=0;i<b;i++)
    {
        res*=(a-i);
        res/=(i+1);
    }
    return res;

}

int cat_way(int m,int n)
{
    if(n<m)
    {
        return 0;
    }
    int ways=biocom(m+n-1,n-1);
    return ways;
}

int main()
{
    int m,n;

    cin>>m;
    cin>>n;
    int res=cat_way(m,n);
    cout<<res;
}