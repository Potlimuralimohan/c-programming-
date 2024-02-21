#include<iostream>
#include<vector>//manages size automatically

using namespace std;

void display(vector <int> &v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}


int main(){
    vector<int>vec1;//Zero  integet vectorsize;
    vector<int>vec2(4);
    int element,size=5;
    // cout<<"Enter the size of vector";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an Element to add this vector";
    //     cin >>element;
    //     vec1.push_back(element);
    // }
    // //vec1.pop_back();
    // display(vec1);
    // vector<int> :: iterator iter=vec1.begin();
    // vec1.insert(iter+1,5,566);//put 5 times
    // vec1.insert(iter+1,566);//place in that position.

    display(vec1);
    return 0;
    

}