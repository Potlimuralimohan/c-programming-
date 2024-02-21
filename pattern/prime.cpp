#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    bool flag=0;
    if(num<=1){
        cout<<"not prime";
        flag=1;
    }
    else{
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                cout<<"not prime"<<endl;
                flag=1;
                break;
            }
        }
    }

    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
}