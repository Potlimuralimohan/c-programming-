#include<iostream>
using namespace std;
/*
class templets with multiple (one,two or more)
templet<class t1,class t2>
class nameofcalss{
    //body
}  
*/
template <class T1,class T2>

class myclass{
    public:
        T1 data1;//those int and char values are in templet.
        T2 data2;
        //constructor
        myclass (T1 a,T2 b){
            data1=a;
            data2=b;
        }
    void display(){
        cout<<this->data1<<this->data2;
    }
};
int main(){
    myclass <int,char>obj(1,'c');
    obj.display();

    return 0;
}