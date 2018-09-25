#include<iostream>
using namespace std;

struct node
{
    int info;
    node* next;
};

node* head;
void insert_first(int data);
void insert_mid(int position, int data);
void insert_end(int data);
void display();

int main()
{

    bool yes=true;
    while(yes)
    {
        cout<<"Insert node at the Beginning : Press  1 "<<endl;
        cout<<"Insert node in the Middle    : Press  2 "<<endl;
        cout<<"Insert node at the End       : Press  3 "<<endl;
        cout<<"exit                         : Press  4 "<<endl;
        cout<<endl;


    int choice;
    cout<<"Enter the option from the above choice   :  ";
    cin>>choice;
    cout<<endl;

    switch(choice)
    {
        case 1 :
                    cout<<"Insertion at the beginning " <<endl;
                    int x;
                    cout<<"Enter the value to be inserted in the node at the beginning : ";
                    cin>>x;
                    cout<<endl;
                    insert_first(x);
                    display();

             break;


        case 2 :
                    cout<<"Insertion in the Middle "<<endl;
                    int y,pos;
                    cout<<"Enter the position where you want to insert the node : ";
                    cin>>pos;
                    cout<<"Enter the value to be inserted in the node at the required position : ";
                    cin>>y;
                    cout<<endl;
                    insert_mid( pos, y);
                    display();

             break;

          case 3 :
                    cout<<"Insertion at the End " <<endl;
                    int z;
                    cout<<"Enter the value to be inserted in the node at the end : " ;
                    cin>>z;
                    cout<<endl;
                    insert_end(z);
                    display();

             break;

        case 4  :
                    yes = false ;

             break;

        default : cout<<"Invalid choice"<<endl;
             break;

    }

  }
   return 0;
}


void insert_first(int data)
{
        node* temp;
        temp=new node();
        temp->info=data;
        temp->next=head;
        head= temp;

}

void insert_mid(int position, int data)
{
    node* temp;
    temp=new node();
    temp->info= data;
    temp->next=NULL;
    if(position==1)
    {
        temp->next=head;
        head=temp;
        return;
    }

   node* p;
    p=head;
    for(int i=1;i<position-1 && p!=NULL ; i++ )
    {
        p=p->next;

    }
    temp->next=p-> next;
    p->next= temp;

}


void insert_end(int data)
{
                    node *p ,*temp;
                    temp=new node();
                    temp->info = data;
                    p=head;

                    while(p->next!=NULL)
                    {
                        p = p->next ;
                    }
                    p->next =  temp;
                    temp->next = NULL;

}

void display()
{
    cout<<"Linked List : ";
    node* s;
    s=head;
    while(s!=NULL)
    {
        cout<<s->info<<" ";
        s=s->next;
    }
    cout<<endl;
    cout<<endl;


}


















