#include<iostream>
using namespace std;
#include<vector>
#include<deque>

int main(){
    int arr[]={1,-2,-3,4,-5,6,-7,9};
    int k=3;
    int i=0;
    int j=0;
    //int sum=0;
    //int minvalue=INT8_MIN;
    int n=size(arr);
    deque<int> values;
    vector<int>res;
    while (j <n)
    {
        if(arr[j] < 0){
            values.push_back(arr[j]);
        }
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            if(values.size()==0){
                res.push_back(0);
            }
            else{
                res.push_back(values.front());

                if(arr[i] == values.front()){
                    values.pop_front();
                }
                i++;
                j++;
            }
        }
    }
    for(auto x:res){
        cout<<x<<" ";
    }
}
    

