#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
    
public:
    void setData(void){
        cout <<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"id of Empliyee is"<<id<<"count of the Employee is"<<count<<endl;
    }

    static void getcount(void){
        //cout <<id; throws an Error;
        cout<<"the value of the count is "<<count<<endl;
    }
};

int Employee :: count; //default value is Zero
int main(){
    Employee murali,mohan,Anji;
    //murali.id=1  it can't be used as a it is a private one
    murali.setData();
    murali.getData();
    Employee :: getcount();

    mohan.setData();
    mohan.getData();

    Employee :: getcount();
    Anji.setData();
    Anji.getData();
    Employee :: getcount();
    return 0;
} 

