#include<iostream>
using namespace std;
#include<vector>

int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int k=3;
    int i=0;
    int j=0;
    int sum=0;
    int minvalue=INT8_MIN;
    int n=size(arr);
    vector<int>v;
    while (j < n)
    {
        sum=sum+arr[j];
        v.push_back(arr[j]);
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1==k){
            minvalue=max(minvalue,sum);
            sum=sum-arr[i];
            i++;
            j++;
            v.erase(v.begin());
           // v.insert(i);
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    

    
}