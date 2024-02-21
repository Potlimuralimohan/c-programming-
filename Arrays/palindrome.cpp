#include<bits/stdc++.h>
using namespace std;

bool ispalin(int l,int r,string &a)
{
    int i=l;
    int j=r;
    while(i<=j)
    {
        if(a[i] != a[j])
        {
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;;
}

int main()
{
    string a="baaaa";
    string ans="#";
    int maxnum=INT_MIN;
    int l=0;
    int r=a.length()-1;
    while(l<r)
    {
        if(ispalin(l,r,a))
        {
            string sub=a.substr(l,r);
            cout<<sub<<endl;
            int leng=sub.length();
            if(leng>maxnum)
            {
                maxnum=leng;
                ans=sub;
            }
            break;

        }
        l++;
        r--;
    }
    if(ans=="#")
    {
        cout<<"not palindrome"<<endl;
    }
    cout<<ans<<endl;

}