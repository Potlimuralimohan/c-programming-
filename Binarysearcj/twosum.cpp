#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>n;
        //[2,7,11,15], target=9
        int sum=0;
        int length=nums.size();
        for(int i=0;i<length;i++){
            sum=sum+nums[i];
            n.push_back(i);

            if(sum==target){
                
            }
        }
        
    }
};