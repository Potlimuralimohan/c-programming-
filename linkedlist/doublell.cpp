#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    //constrictor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node()
    {
        int val=this ->data;
        if(next != NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node with data"<<val<<endl;
    }

};

//traversing a linked list;

void print(Node* head)
{
    Node* temp=head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        //cout<<temp->prev;
        temp=temp->next;
    }
    cout<<endl;
    
}

//get length;
int getlength(Node* head)
{
    int len=0;

    Node* temp=head;
    while(temp != NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void insertathead(Node* &tail,Node* &head,int d)
{
    if(head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;

    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;

    }
}

void insertattail(Node* &tail,Node* &head,int d)
{
    if(tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;

    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;

    }
}

void insertAtposition(Node* &tail,Node* & head,int positon,int d)
{
    //insert at start;
    if(positon==1)
    {
        insertathead(tail,head,d);
        return;
    }
    Node* temp=head;

    int ctn=1;

    while(ctn < positon-1)
    {
        temp = temp->next;
        ctn++;
    }

    if(temp->next==NULL)
    {
        insertattail(tail,head,d);
        return;
    }
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;


}

void deletenode(int position,Node* &head)
{
    //deletiong first or start node
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;

        delete temp;
    }
    else{
        //deletiong any middle node or last node
        Node* cur=head;
        Node* prev=NULL;

        int cnt=1;

        while(cnt < position)
        {
            prev=cur;
            cur=cur->next;
            cnt++;

        }
        cur->prev=NULL;
        prev -> next=cur->next;
        cur->next=NULL;

        delete cur;
    }
}

int main()
{
   // Node* node1= new Node(10);
    //Node* head=node1;
    //Node* tail=node1;

    Node* head=NULL;
    Node* tail=NULL;

    print(head);
    //cout<<getlength(head)<<endl;

    insertathead(tail,head,11);
    print(head);

    insertattail(tail,head,13);
    print(head);

    insertAtposition(tail,head,2,100);
    print(head);

    insertAtposition(tail,head,4,103);
    print(head);

    deletenode(2,head);
    print(head);
    cout<<"head"<<head ->data << endl;
    cout<<"tail"<<tail ->data << endl;



}