#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int sum=0;

    for(int i=1;i<num;i++)
    {
        if(num % i == 0)
        {
            sum+=i;
        }
    }
    if(num == sum)
    {
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }
}