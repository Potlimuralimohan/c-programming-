#include<iostream>
using namespace std;

int bubblesort(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int num=arr[i];

        for(int j=1;j<n;j++)
        {
            if(num > arr[j])
            {
                swap(num,arr[j]);
                count++;
            }
        }

    }
    return count;

}
int bubbledes(int arr[], int n)
{
    int cot=0;
    for(int i=0;i<n-1;i++)
    {
        int num1=arr[i];
        for(int j=0;j<n-i-1;j++)
        {
            if(num1 > arr[j])
            {
                swap(num1,arr[j]);
                cot++;
            }
        }
    }
    return cot;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int asssor= bubblesort(arr,n);
    int desor=bubbledes(arr,n);
    // cout<<asssor<<endl;
    // cout<<desor<<endl;
    
    if(asssor >desor )
    {
        cout<<desor<<endl;
    }
    else{
        cout<<asssor<<endl;
    }
}