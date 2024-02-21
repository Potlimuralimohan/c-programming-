#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=0;
    int num2=num;
    while (num>0)
    {
        int lastdigit=num%10;
        sum+=pow(lastdigit,3);
        num=num/10;
    }
    if(sum==num2){
        cout<<"amstrong"<<endl;
    }
    else{
        cout<<"not amstrong";
    }
    
}
