#include<iostream>
using namespace std;

class Stack{
    //properties.
    public:
    int *arr;
    int top;
    int size;
    //behavior
    Stack(int size)
    {
        this ->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(size - top >1)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is Overflow"<<endl;
        }

    }
    void pop()
    {
        if(top >=0)
        {
            top--;
        }
        else{
            cout<<"stack Underflow"<<endl;
        }

    }
    int peak()
    {
        if(top >=0)
            return arr[top];
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }


};

int main()
{
    Stack st(5);
    st.push(22);
    //st.push(43);
    //st.push(44);
    cout<<st.peak()<<endl;//peak is a method;
    st.pop();
    cout<<st.peak()<<endl;

}