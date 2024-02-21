#include<iostream>

using namespace std;

// int getlength(char name[]){
//     int count=0;
//     for (int i = 0; name[i] !='\0'; i++)
//     {
//         count++;
//     }
//     return count;
        
// }
int main() {

    char name[10];
    cout<< "Enter the name"<<endl;
    cin>>name;
    //name[2]='\0'; //that line Ends here

    cout<<"Enter your name is"<<endl;
    cout<<name<<endl;

    //cout<<"length"<<getlength(name)<<endl;

    return 0;

}