#include<iostream>
#include<string>
using namespace std;

class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void){ counter=0;};
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout<<"Enter Id of your item"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of toue item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void)
{
    for(int i=0;i<counter;i++){
        cout<<"The Price of item with id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;
    }
}
int main(){
    shop dukan;
    dukan.initCounter();
    //put it in a single loop
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;

}
