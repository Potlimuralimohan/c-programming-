#include<iostream>
using namespace std;

//factorial of a number;
//61=6*5*4*3*2*1=720;

int factorial(int num){
    if (num<=1){
        return 1;
    }
    return num*factorial(num-1);
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num)<<endl;


}