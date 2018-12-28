#include<iostream>
using namespace std;

struct node
{
    int info;
    node* left;
    node* right;
};
bool search(node* root,int data);

node* get_new_node(int data)
{
    node* temp;
    temp= new node();
    temp->info=data;
    temp->left=NULL;
    temp->right=NULL;

   return temp;
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<"values in pre-order"<< root->info<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<"values in in-order "<<root->info<<endl;
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<"values in post-order "<<root->info<<endl;
}

int FindMin(node* root)
{
    if(root==NULL)
    {
        cout<<"Error : TREE is empty"<<endl;
        return -1 ;
    }
    while(root->left != NULL)
    {
        root = root->left;
    }
    cout<<"MIN value :"<<root->info;
    return root->info;
}

int FindMax(node* root)
{
    if(root==NULL)
    {
        cout<<"Error : TREE is empty"<<endl;
        return -1 ;
    }
    while(root->right != NULL)
    {
        root = root->right;
    }
    cout<<"MAX value :"<<root->info;
    return root->info;
}


node* insert(node* root,int data)
{
    if(root==NULL)
    {
        root=get_new_node(data);
    }
    else if(root->info <= data)
    {
        root->right = insert(root->right,data);
    }
    else{
        root->left = insert(root->left,data);
    }
   return root;
}

node* delete_node(node* root, int data)
{
    if(root==NULL)
    {
        cout<<"Tree is empty"<<endl;
        return root;
    }
    else if (root->info < data)
    {
        root->right = delete_node(root->right,data);
    }
    else if(root->info > data)
    {
        root->left = delete_node(root->left,data);
    }
    else
    {
        //Deleting element has been founded !

        //case 1: no child

        if(root->left == NULL && root->right== NULL)
        {
            delete root;
            root= NULL;
        }

        // case 2 : one child

        else if(root->left == NULL)
        {
            node* temp;
            temp = root;
            root = root->right;
            delete temp;
        }

        else if(root->right == NULL)
        {
            node* temp;
            temp = root;
            root = root->left;
            delete temp;
        }

        // case 3 : two child

        else
        {
           int temp;
           temp = FindMin(root->right);
           cout<<endl;
           cout<<"Root node after deletion : NEW ROOT NODE :"<<temp<<endl;
           cout<<endl;
           root->info = temp;
           root->right = delete_node(root->right,temp);

        }
    }

   return root;

}





int main()
{
    node* root=NULL;

    //insertion

    root=insert(root,30);
    root=insert(root,20);
    root=insert(root,15);
    root=insert(root,5);
    root=insert(root,25);
    root=insert(root,10);
    root=insert(root,40);
    root=insert(root,9);
    root=insert(root,45);
    root=insert(root,50);


    //traversing

     preorder(root);
      cout<<endl;
     inorder(root);
      cout<<endl;
     postorder(root);
      cout<<endl;

     //min and max

     FindMin(root);
     cout<<endl;
     FindMax(root);
     cout<<endl;
     cout<<endl;

     //deleting the node

     int x;
     cout<<"Enter the node to be deleted :";
     cin>>x;

     if(search(root,x)==true)
    {
        delete_node(root,x);
        cout<<endl;
        cout<<"Elements after deletion :"<<endl;
        cout<<endl;
        inorder(root);
        cout<<endl;

    }
    else{
        cout<<" Error : Element NOT FOUND!"<<endl;
        cout<<endl;
    }


    //searching

    int num;
    cout<<"ENTER the number to searched"<<endl;
    cin>>num;

    if(search(root,num)==true)
    {
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND!";
    }

return 0;

}

bool search(node* root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->info == data)
    {
        return true;
    }
    else if(root->info < data)
    {
        return search(root->right,data);

    }
    else{
        return search(root->left,data);
    }
}
