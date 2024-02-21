// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>

using namespace std;

string ans(int n,int num)
{
    string res="";
    int quo=num /n;
    vector<int>nums;
    nums.push_back(num%n);
    while(quo !=0)
    {
        //int quo=num %n;
        nums.push_back(quo%n);
        quo=quo/n;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] > 9)
        {
            res=(char) (nums[i]-9+64)+res;
        }
        else
        {
            res=to_string(nums[i])+res;
        }
    }
    return res;
}

int main()
{
    int n,num;
    cin>>n>>num;
    cout<<ans(n,num);

    return 0;

}