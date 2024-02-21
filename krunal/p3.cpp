#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    for (int i=0 ; i<2*num;i++){
        int col=(i>num)? 2*num-i:i;
        for (int j=0;j<col;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}