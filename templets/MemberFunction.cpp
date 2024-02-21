#include<iostream>
using namespace std;

template <class T>

class Harry{
    public:
        T data;
        Harry(T a){
            data=a;
        }
        void display();
};
template <class T >

void Harry <T>::display(){
            cout << data;
        }

void func(int a){
    cout<<"I am first func() murali"<<a<<endl;

}
template <class T>

void func1(T a){
    cout<<"I am first func()"<<a<<endl;

}
int main(){
    //Harry <char> h('s'); // Object.
    //cout<<h.data<<endl;
    //h.display();

    func(4);
    func1(4);
    return 0;
}