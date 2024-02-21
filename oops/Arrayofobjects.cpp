#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;
public:
    void setId(void){
        salary=122;
        cout << "Enter the id of Employee";
        cin >> id;
    }
    void getId(void){
        cout <<"the id of the EMployee is"<<id<<end;
    }
};

int main(){
    /*
    Employee  a,b,c,d;
    a.setId();
    a.getId();
    return 0;
    */
   Employee fb[4];
   for (int i = 0; i < 4 ; i++)
   {
        fb[i].setId();
        fb[i].getId();
   }
   

}
