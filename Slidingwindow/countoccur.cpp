#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int countoccurence(string s,string p){
    unordered_map<char,int> mp;
    int ans=0;
    cout<<"mohsabx";

    //storing the occ. of string p in the map;

    for(auto &x:p){//map the value in the string p;
        mp[x]++;
    }


    int count=mp.size();
    cout<<count;
    int k=p.size();
    int i=0,j=0;
    cout<<count;

    while(j<s.size()){
        //calculation;
        if(mp.find(s[j]) != mp.end()){//mp.end points to iterator at end;
            mp[s[j]]--;
            if(mp[s[j]] ==0){
                count--;
            }
        }
        //window length not achieved;

        else if(j-i+1 <k){
            j++;
        }
        else if(j-i+1 ==k){
            //finding ans;

            if(count==0){
                ans++;
            }
            //calculations not done;
            if(mp.find(s[i]) != mp.end()){
                mp[s[i]]++;//map present
                if(mp[s[i]]==1){
                    count++;
                }
            }
            //slide the window
            i++;
            j++;
        }


    }
    return ans;
}

int main(){
    string s,p;
    cin>>s;
    cin>>p;
    cout<<s<<endl;
    //cout<<p<<endl;

    int values=countoccurence(s,p);
    cout<<values;

    return 0;
}