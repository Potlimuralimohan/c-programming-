#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int reverse=0;
    int num2=num;
    while (num>0)
    {
        int lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num=num/10;
    }
    if(num2==reverse){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    
}