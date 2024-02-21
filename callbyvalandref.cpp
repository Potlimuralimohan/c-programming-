#include<iostream>
using namespace std;

/*
int sum(int a,int b){
    int c=a+b;
    return c;
}

//this will not swap and b with out pointers;
void swap(int a,int b){
    int temp=a;
    //cout<<a<<endl;
    a=b;
    b=temp;
}

//callbyreference using pointers;
void swapPointer(int* a,int* b){
    int temp=*a;
    //cout<<a<<endl;
    *a=*b;
    *b=temp;
}

//swap using a c++ reference variables;
void swapPointerreference(int &a,int &b){
    int temp=a;
    //cout<<a<<endl;
    a=b;
    b=temp;
}
//throurh return by reference;
int & swapPointerreferencevar(int &a,int &b){
    int temp=a;
    //cout<<a<<endl;
    a=b;
    b=temp;
    return a;
}

int main(){
    int num1,num2;
    cin>>num1;
    cin>>num2;
    //cout<<"sum is"<<sum(num1,num2)<<endl;
    //swap(num1,num2);
    //swapPointer(&num1,&num2);-->//callbyreference using pointers;
    swapPointerreference(num1,num2);//-->swap using a c++ reference variables;
    //swapPointerreferencevar(num1,num2)=766;
    cout<<num1<<num2<<endl;

}
*/

int  modifyValue(int x) {
    x = x * 2;
    return x;
}

int main() {
    int num = 5;
    modifyValue(num);
    std::cout << "Original value: " <<num<< std::endl;  // Output: Original value: 5
    return 0;
}
