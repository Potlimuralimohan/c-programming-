#include<iostream>

using namespace std;
bool ispresenr(int arr[][4], int target,int row,int col){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if( arr[i][j] == target){
                return 1;
            }
        }
        
    }
    return 0;

}
//to print row wise sum;
void printsum(int arr[][4],int row,int col){
    cout<<"printing sum"<<endl;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j= 0; j < 4;j++)
        {
            sum+=arr[i][j];
        }
        cout<< sum << " ";
        
    }
    

}
int largertRowSum(int arr[][4],int row,int col){
    int maxi=INT8_MIN;
    int rowINdex=-1;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 4; j++)
        {
            sum+=arr[i][j];
            
        }
        if(sum > maxi){
            maxi=sum;
            rowINdex=row;
        }
        
    }
    cout<<"the maximum sumis"<<maxi<<endl;
    return rowINdex;
    
}

int main(){
    int arr[3][4];//{{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    //taking input;->row
    cout<<"Enter the element "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //taking input;->col
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }


    //print output;
    cout<<"Printing the array"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }

    // cout<<"Enter the element for the search"<<endl;
    // int target;
    // cin>>target;

    // if(ispresenr(arr,target,3,4)){
    //     cout<<"Element Found"<<endl;
    // }
    // else{
    //     cout<<"not Found"<<endl;
    // }

    //printsum(arr,3,4);
    int ansIndex=largertRowSum(arr,3,4);
    cout<<"Max row is at index"<<ansIndex<<endl;


    return 0;
}