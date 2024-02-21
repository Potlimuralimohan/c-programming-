#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int bag_size;
    cin>>bag_size;
    vector<int>v;
    vector<int>v1;


    for(int i=1;i<=bag_size;i++)
    {
        v.push_back(i);
    }
    int n;
    cin>>n;
    int n1[n];
    for(int i=0;i<n;i++)
    {
        cin>>n1[i];
    }

    for(int i=0;i<bag_size;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i] != n1[i])
            {
                v1.push_back(v[i]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];

    }
    // int sum=0;
    // int i=0;
    // int j=0;
    // int minlength=INT8_MIN;
    // while(j<v.size())
    // {
    //     sum=sum+v[i];
    //     if(sum <= bag_size)
    //     {
    //         minlength=max(minlength,j-i+1);
    //         sum=sum-v[i];
    //         i++;
    //     }
    //     j++;
    // }
    //cout<<minlength<<endl;



    return 0;

}