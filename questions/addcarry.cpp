#include<iostream>
using namespace std;
int bit(int n,int m){
    int carry=0,sum,p,q,count=0;
    while((n != 0) && (m !=0))
    {
        p=n%10;
        q=m%10;
        sum=carry+p+q;
        if(sum > 9)
        {
            count++;
            carry=1;
        }
        else
        {
            carry=0;
        }
        n=n/10;
        m=m/10;
    }
    while(n !=0)
    {
        p=n%10;
        sum=carry+p;
        if(sum > 9)
        {
            carry=1;
            count++;
        }
        else
        {
            carry=0;
        }
        n=n/10;
    }
    
     while(m !=0)
    {
        q=m%10;
        sum=carry+q;
        if(sum > 9)
        {
            carry=1;
            count++;
        }
        else
        {
            carry=0;
        }
        m=m/10;
    }
    return count;
}
int main() {
    //std::cout << "Hello World!\n";
    int n,m;
    cin>>n>>m;
    cout<<bit(n,m);
}