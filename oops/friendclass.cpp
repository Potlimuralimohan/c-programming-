#include<iostream>
using namespace std;

//forword Decleration.
class complex;

class calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }

        int sumcomplex(complex ,complex );
        int sumcompcomplex(complex ,complex );

};

class complex
{
private:
    int a,b;
    //individually declaring function friends;
   // friend int calculator :: sumcomplex(complex ,complex );
    //friend int calculator :: sumcompcomplex(complex ,complex );
    //declare the entire claculator class as friend;
    //giving permission to the calculator.
    friend class calculator;
public:
    void Setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void Printnumber(){
        cout<<"your number is"<<a<<"+"<<"i"<<endl;
    }
};

int calculator :: sumcomplex(complex o1,complex o2){
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1,complex o2){
    return (o1.b + o2.b);
}

int main(){

    complex o1,o2;
    o1.Setnumber(1,4);
    o2.Setnumber(5,7);
    calculator calc;

    int res=calc.sumcomplex(o1,o2);
    cout <<"the sum of real part of o1,o2 is "<<res<<endl;

    int resc=calc.sumcompcomplex(o1,o2);
    cout <<"the sum of real part of o1,o2 is "<<resc<<endl;
    return 0;

}