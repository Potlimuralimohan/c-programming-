#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    for (int row=1; row<=2*num;row++){
        int c=row>num ? 2*num-row:row;
        for(int s=0;s<num-c;s++){
            cout<<" ";
        }
        for(int col=c;col>=1;col--){
            cout <<col;
        }
        for(int col=2; col<=c; col++){
            cout <<col;
        }
        cout <<endl;
    }
}
