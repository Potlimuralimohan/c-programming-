#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1, int c1 );
        void getData(){
            cout<<"the calud of a is"<<a<<endl;
            cout<<"the calud of b is"<<b<<endl;
            cout<<"the calud of c is"<<c<<endl;
            cout<<"the calud of d is"<<d<<endl;
            cout<<"the calud of e is"<<e<<endl;

        }
};

void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee murali;
    murali.d=56;
    murali.e=44;
    murali.setData(1,2,3);
    murali.getData();
    return 0;

}