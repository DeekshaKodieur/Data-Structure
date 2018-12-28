#include<iostream>
using namespace std;

int main()
{
    int a[20],i,value,size,pos;
    cout<<"enter the size  of an array : "<<endl;
    cin>>size;
    cout<<"enter the elements of an array : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }

    //insertion
    cout<<"enter the value to be inserted : ";
    cin>>value;
    cout<<"enter the position : ";
    cin>>pos;

    for(i=size-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    size++;
    cout<<"after insertion array is :"<<endl;
    for(i=0;i<size;i++)
    {
        cout<< " "<<a[i];
    }
    cout<<endl;
    cout<<endl;


    //deletion

    cout<<"enter the position whose value is to be deleted :" ;
    cin>>pos;

    i=pos;
    while(i<size)
    {
        a[i]=a[i+1];
        i++;
    }
    size--;
    cout<<"after deletion array is :"<<endl;
    for(i=0;i<size;i++)
    {
        cout<< " "<<a[i];
    }

   return 0;




}
