#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data=d;
        next=NULL;
    }

    ~Node()
    {
        int value=this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void insertnode(Node* &tail,int element,int d)//based on this element we an insert
{
    //assuming that the element is present in the list

    //empty list

    if(tail == NULL)
    {
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next = newnode;
    }

    else{
        //non-empty list
        //assumig that the element is present in the list

        Node* cur=tail;
        while(cur->data != element)
        {
            cur=cur->next;
        }
        Node* temp = new Node(d);
        temp->next = cur->next;
        cur->next=temp;
    }
}

void print(Node* tail)
{
    Node* temp=tail;
    //empty list;
    if(tail==NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    // cout<<tail->data<<" ";

    // while (tail->next != temp)
    // {
    //     cout<<tail->data<<" ";
    //     tail=tail->next;
    // }
    // cout<<" ";

    //another way is;

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while (tail != temp);
    cout<<endl;
    
    
}

void deletenode(Node* &tail,int value)
{
    //empty list;
    if(tail == NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else{
        //non-empty
        
        Node* prev=tail;
        Node* cur=prev->next;
        while(cur->data != value)
        {
             prev=cur;
             cur=cur->next;
        }
        prev->next=cur->next;
        if(cur==prev)
        {
            tail=NULL;
        }
        else if(tail == cur)
        {
            tail=prev;
        }
        cur->next=NULL;
        delete cur;
    }
}

int main()
{
    Node* tail=NULL;
    insertnode(tail,5,3);
    print(tail);
    // insertnode(tail,3,5);
    // print(tail);

    // insertnode(tail,5,7);
    // print(tail);

    // insertnode(tail,7,9);
    // print(tail);
    // insertnode(tail,5,6);
    // print(tail);

    // insertnode(tail,3,4);
    // print(tail);

    deletenode(tail,3);
    print(tail);



    return 0;

}