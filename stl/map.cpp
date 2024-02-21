#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    //0(logn)
    m[1]="murali";
    m[2]="mohan";
    m[19]="anji";

    m.insert({5,"mark"});
    cout<<"Befor Erase"<<endl;

    for (auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"fincding 9"<<m.count(9)<<endl;//element find or not;

    m.erase(1);
    cout<<"aftwe Erase" <<endl;

    for (auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


}