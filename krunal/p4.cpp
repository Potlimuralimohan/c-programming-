#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    for (int row=0 ; row<2*num; row++){
        int cols=(row>num) ? 2*num-row:row;

        int spaces=num-cols;

        for(int spa=0;spa < spaces;spa++){
            cout<<" ";
        }
        for (int col=0;col<cols;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}