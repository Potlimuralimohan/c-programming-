#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    string temp="";
    cout<<s.length()<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.length()<<endl;
        if(s[i]== ' '){
            cout<<"1233";
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }
        else{
            temp.push_back(s[i]);
        }
    }
    cout<<temp;
    
}