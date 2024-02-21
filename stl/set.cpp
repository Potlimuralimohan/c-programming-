#include<iostream>
# include<set>
using namespace std;

int main(){
    set<int>s;

    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(0);
    s.insert(0);//0(logn);

    for (int i:s){
        cout <<i<<endl;
    }
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
     for (int i:s){
        cout <<i<<endl;
    }
    cout <<endl;

    cout <<"-5 is present"<<s.count(-5)<<endl;

}