#include<iostream>
using namespace std;

int main(){
    int size=10;
    int arr[]={10,9,8,7,6,5,4,3,2,1};

    int start=0;
    //cout<<start;
    int end=size-1;
    //cout<<end;
    int element;
    cin>>element;

    while (start < end)
    {
        int mid= ((start+end)/2);
        //cout<<mid<<endl;

        if(element == arr[mid]){
            cout<<mid;
            break;

        }
        else if(element < arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}