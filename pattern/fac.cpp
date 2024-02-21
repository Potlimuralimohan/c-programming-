#include<iostream>
using namespace std;

// int factorial(int num){
//     if(num==1){
//         //cout<<num<<" ";
//         return num;
//     }
//     int num1=num*factorial(num-1);
//     return num1;

// }
int main(){
    int num;
    int sum=1;    
    cin>>num;
    //cout<<factorial(num);
    //cout<<num;
    for(int i=num;i>=1;i--){
        sum=sum*i;
    }
    cout<<sum;

}