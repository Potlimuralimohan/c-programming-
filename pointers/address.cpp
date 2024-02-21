#include<iostream>
using namespace std;

int main(){
    /*
    int num=5;

    cout<<num<<endl;

    //address of Operator-&
    cout<<"address of num is"<<&num<<endl;

    int *ptr=&num;
    cout<<"address is:"<<ptr<<endl;
    cout<<"value is :"<<*ptr<<endl;

    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
    */

   int num=5;
   int a=num;
   cout<<"after"<<num<<endl;
   a++;
   cout<<"Before"<<num<<endl;

   int *p = &num; //* represents pointer;
   cout<<"before"<<num<<endl;
   (*p)++;
   cout<<"after"<<num<<endl;
//coping pointer;
    int*q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;





    return 0;
}