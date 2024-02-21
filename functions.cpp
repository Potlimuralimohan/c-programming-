#include<iostream>
using namespace std;
//functions part by part dividing;

//function prototype
//type function-name (arguments);

int sum (int a,int b);
void g();
//int sum(int,int)--accatable


int main(){
    int num1,num2;
    cout <<"enter no 1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    g();
    //num1 and num2 will be actual parameters
    cout <<sum(num1,num2);
    return 0;
}

int sum(int a,int b){
    //a and b will be formual parameters
    int c=a+b;
    return c;

}

void g(){
    cout<<"good morning";
}