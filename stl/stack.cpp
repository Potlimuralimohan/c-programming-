#include<iostream>
#include<stack>
//lifo;

using namespace std;

int main(){

    stack<string>s;

    s.push("murali");
    s.push("anji");
    s.push("mar");

    cout<<"Top Element"<<s.top()<<endl;

    s.pop();

    cout<<"Top Element"<<s.top()<<endl;

    cout<<"size of stack"<<s.size()<<endl;

    cout<<"Empty or nor"<<s.empty()<<endl;

}