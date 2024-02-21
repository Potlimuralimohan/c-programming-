#include<iostream>
using namespace std;

int main(){
    int num=10;
    int key;
    cin>>key;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int start=0;
    int end=num-1;
    while (start<=end)
    {
        int mid=((start+end)/2);
        //cout<<mid;
        if(key==arr[mid]){
            cout<<mid<<endl;
            break;
        }
        else if(key<arr[mid]){
            end=mid-1;
            //cout<<end<<endl;
        }
        else{
            start=mid+1;
            //cout<<start<<endl;
        }
    }



}