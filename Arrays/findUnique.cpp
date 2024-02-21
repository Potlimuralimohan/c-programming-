#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,2,1,9};
    int size=6;
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}