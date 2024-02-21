#include<iostream>
using namespace std;

int fibo(int num){
    if(num<=0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    return fibo(num-1)+fibo(num-2);

}

int main(){
    // int num,num3;
    // cin >>num;
    // int num1=0;
    // int num2=1;
    // for (int i=0;i<num;i++){
    //     cout<<num1<<" ";
    //     num3=num1+num2;
    //     num1=num2;
    //     num2=num3;
    // }
    // return 0;

    int num;
    cin>>num;
    cout<<fibo(num)<<endl;
}
