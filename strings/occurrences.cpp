#include<iostream>
using namespace std;

//create an array of count of charactors;

char getmaxcharactor(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //cout<<ch<<endl;

        int number=0;
        if(ch >='a' && ch<='z'){
            number=ch -'a';
        }
        else{
            number=ch -'A';
        }

        arr[number++];

    }

    int maxi=-1,ans=0;

    for (int i = 0; i< 26; i++)
    {
        if(maxi < arr[i]){
            ans=i;
            cout<<arr[i]<<endl;
            maxi = arr[i];
        }
    }
    char finalanswar='a'+ans;
    return ans;
    
}
int main(){

    string s;
    cin>>s;

    cout<<getmaxcharactor(s) <<endl;


    return 0;
}