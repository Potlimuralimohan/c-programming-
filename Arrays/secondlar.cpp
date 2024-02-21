#include<iostream>

using namespace std;

int secondlar(int arr[],int n){
    int forstlarget=0;
    int secondlargest=0;

    for (int i = 0; i < n; i++)
    {
        if(forstlarget < arr[i]){
            secondlargest=forstlarget;
            forstlarget=arr[i];
        }
        else if (arr[i] != forstlarget && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    //cout<<forstlarget<<endl;
    return secondlargest;
    


}

int main(){
    int arr[10]={1,2,100,4,200,90,59};
    int num=secondlar(arr,8);
    cout<<num;
    
}