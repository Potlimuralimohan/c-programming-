#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setNUmber(int n1,int n2){
        a=n1;
        b=n2;
    }
    //sumcomplex function is allowed to do anything with y private parts.
    friend complex sumcomplex(complex o1,complex o2);
    void PrintNumber(){
        cout<<"your number"<<a<<"+ "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setNUmber((o1.a +o2.a),(o1.b,o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setNUmber(1,2);
    c1.PrintNumber();

    c2.setNUmber(3,4);
    c2.PrintNumber();

    sum=sumcomplex(c1,c1);
    sum.PrintNumber();

}
