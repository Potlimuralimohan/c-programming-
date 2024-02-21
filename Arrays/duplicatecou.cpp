#include<iostream>
#include<map>

using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,9,3,3};
    map<int,int>mp;

    for(auto i:arr){
        mp[i]++;

    }
    for(auto x:mp){
        cout<<x.first<<endl;//" "<<x.second<<endl;
    }

}