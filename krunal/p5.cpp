#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for (int row=1;row<=num;row++){
        for(int space=0;space<num-row;space++){
            cout<<" ";
        }
        for(int col=row;col>=1 ;col--){
            cout <<col;
        }
        for(int col=2;col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }
}
