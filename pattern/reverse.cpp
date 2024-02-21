#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    int reverse=0;
    int int_min=-pow(2,31);
    int int_max=pow(2,31) - 1;

    while (num != 0)
    {
        int lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        if((reverse > int_min/10 ) || (reverse > int_min/10 )){
            return 0;
        }
        num=num/10;
    }
    
    cout<<reverse<<endl;
    return 0;
    
}
