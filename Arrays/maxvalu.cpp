#include <iostream>
//#include <vector>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        //int nums;
        cin>>arr[i];
        //v.push_back(nums);
    }
    // for(int i=0;i<num;i++){
    //     cout<<arr[i]<<endl;
    // }
    int sum=arr[num-1];
    //cout<<sum<<endl;
    //int maxvalue=arr[num-1];
    if(num==0){
            //sum+=v[j];
            cout<<-1<<endl;
    }
    
    for(int j=num-2;j>=0;j--)
    {
        if(arr[j-1] > arr[j])
        {
            sum+=arr[j];

            //maxvalue=arr[j];
        }

    }
    cout<<sum<<endl;

}