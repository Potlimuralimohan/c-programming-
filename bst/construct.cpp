#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* minval(Node* root)
{
    Node* temp=root;
    while(temp->left != NULL)
    {
        temp=temp->left;
    }
    return temp;
}
Node* maxval(Node* root)
{
    Node* temp=root;
    while(temp->right != NULL)
    {
        temp=temp->right;
    }
    return temp;
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node* insertintoBst(Node* &root ,int d)
{
    if(root == NULL)
    {
        root=new Node(d);
        return root;
    }
    if(d>root->data)
    {
        root->right=insertintoBst(root->right,d);
    }else{
        root->left=insertintoBst(root->left,d);
    }
    return root;

}

void levelordertraverse(Node* root)
{
    queue< Node* >q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp==NULL)//one level complete
        {
            cout<<endl;
            if( !q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<< " " ;
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        
    }
    
}

Node* deleteFromBST(Node* root,int val)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->data == val)
    {
        //0 child
        if(root->left == NULL && root->right ==NULL)
        {
            delete root;
            return NULL;
        }
        //left child
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //right chil;
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child;

        if(root->left != NULL && root->right != NULL)
        {
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }

    }
    else if(root->data > val)
    {
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else
    {
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}

void takeInput(Node* &root)
{
    int data;
    cin>>data;
    while(data != -1)
    {
        root=insertintoBst(root,data);
        cin>>data;
    }
}
int main()
{
    Node* root=NULL;
    cout<<"Enter data to create BSt"<<endl;
    takeInput(root);
    cout<<"level order traversal"<<endl;
    levelordertraverse(root);
    cout<<endl<<"print preorder"<<endl;
    preorder(root);
    cout<<endl<<"print inorder"<<endl;
    inorder(root);
    cout<<endl<<"print postorder"<<endl;
    postorder(root);
    cout<<"minvalue of the root"<<minval(root)->data<<endl;
    cout<<"maxvale of the root"<<maxval(root)->data<<endl;
    //maxval(root)->data;

    root=deleteFromBST(root,30);

    cout<<"level order traversal"<<endl;
    levelordertraverse(root);
    cout<<endl<<"print preorder"<<endl;
    preorder(root);
    cout<<endl<<"print inorder"<<endl;
    inorder(root);
    cout<<endl<<"print postorder"<<endl;
    postorder(root);
    cout<<"minvalue of the root"<<minval(root)->data<<endl;
    cout<<"maxvale of the root"<<maxval(root)->data<<endl;


    
    
    return 0;

}