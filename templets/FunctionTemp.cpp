#include<iostream>
using namespace std;

// float funcAverage(int a ,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template <class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}

template<class T1,class T2>
float funcAverage(T1 a , T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float c;
    c=funcAverage(3,4);
    printf("the average number of %.3f" ,c); //print of 3 decimals;

    int x=5,y=7;
    swapp(x,y);
    cout <<x<<endl<<y;
    return 0;

}