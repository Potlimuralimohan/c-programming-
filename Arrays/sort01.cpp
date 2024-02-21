#include<iostream>

using namespace std;

void printone(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" " ;
    }cout<<endl;
    
}

void sortone(int arr[],int n){
    int left=0;
    int right=n-1;
    while (left < right){
        if(arr[left] == 0){
            left++;
        }
        else if (arr[right] == 1)
        {
            right++;
        }
        else
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
        

    }
    
}

int main(){
    int arr[10]={1,1,0,0,0,0,1,0};
    sortone(arr,9);
    printone(arr,9);

}