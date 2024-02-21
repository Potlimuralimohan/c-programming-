#include<iostream>
#include<queue>

using namespace std;
//fifo;

int main(){
    queue<string> q;

    q.push("murali");
    q.push("mohasn");
    q.push("mkibcd");

    cout<<"forst Element"<<q.front()<<endl;
    q.pop();
    cout<<"forst Element"<<q.front()<<endl;

    cout<<"Size of pop"<<q.size()<<endl;


}