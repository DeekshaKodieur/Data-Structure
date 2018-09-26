#include<iostream>
using namespace std;

void push(int value);
void pop();
void display();
int a[20];
int top = -1;

bool isempty()
{
    if(top== -1)
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
        cout<<"Inserting the value  : Press 1 "<<endl;
        cout<<"Deleting the value   : Press 2 "<<endl;
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


void push(int value)
{
    if(top == 19)
    {
        cout<<"stack is full "<<endl;
    }
    else
        top = top+1 ;
        a[top]=value ;
}

void pop()
{
    if(isempty())
    {
        cout<<"stack is empty "<<endl;
    }
    else
        top = top-1;
}

void display()
{
    cout<<"Stack is : " ;
    if(isempty())
    {
        cout<<"stack is empty "<<endl;
    }
    else
        for(int i=0 ; i<=top ; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<endl;
}


