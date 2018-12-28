#include<iostream>

using namespace std;

struct node
{
    int info;
    node* next;
};

node* top=NULL;
void push(int data);
void pop();
void display();
int size=0;

bool isempty()
{
    if(top== NULL)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    bool t = true;
    while (t)
    {
        cout<<"Inserting the node   : Press 1 "<<endl;
        cout<<"Deleting the node    : Press 2 "<<endl;
        cout<<"exit                 : Press 3 "<<endl;
        cout<<endl;

        int option;
        cout<<"Enter the choice from the above options : ";
        cin>>option;
        cout<<endl;

        switch(option)
        {
            case 1 :
                    cout<<"Insertion : " <<endl;
                    int x;
                    cout<<"Enter the value to be inserted : ";
                    cin>>x;
                    cout<<endl;
                    push(x);
                    display();

                break;

            case 2 :
                    cout<<"Deletion : " <<endl;
                    cout<<endl;
                    pop();
                    display();

                break;

            case 3 :
                    t = false;

                break;

           default : cout<<"Invalid choice ! "<<endl;
                     cout<<endl;
                break;


        }

    }
    return 0;
}

void push(int data)
{
    node* ptr;
    ptr=new node();
    ptr->info=data;
    ptr->next=top;
    top=ptr;
    size++;
}


void pop()
{
    if(isempty())
    {
        cout<<"Stack is empty "<<endl;
        cout<<endl;
    }
    else
    {
        node* ptr;
        ptr=top;
        top=top->next;
        delete(ptr);
        size--;
    }
}

void display()
{
    if(size==0)
    {
        cout<<"Stack is empty "<<endl;
        cout<<endl;
    }

    else
    {
        node* ptr;
        ptr=top;
        cout<<"Stack is : ";
        while(ptr!=NULL)
        {
            cout<<ptr->info <<" ";
            ptr=ptr->next;
        }
        cout<<endl;
        cout<<endl;

        cout<<"Element at the top : ";
        cout<<top->info<<endl;
        cout<<endl;
    }



}
