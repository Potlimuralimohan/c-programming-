#include<iostream>

using namespace std;

// string revers1(string s,int num){  
//     string reverse1="";
//     for(int i=0;i<s.length();i++) {
//         if((s[i] ==' ') || (s[i] == '\0')){
//             int start=0;
//             int end=i;
//             while(start <=end){
//                 swap(s[start],s[end]);
//                 start++;
//                 end--;
//             }
//        // start=i+1;
//        }
//     }
//     return reverse1;

// }

int main(){
    //char arr1[10]={'m','u','r','\0','u'};

    string name="murali mohan";
    //cout<<name.length();
    for(int i=0;i<name.length();i++){
        int start=0;
        int end=name.length();
        if(name[i]==' '){
        while (start <= end)
        {
            swap(name[start],name[end]);
            start++;
            end--;
        }
        }
    }
    cout<<name;
}