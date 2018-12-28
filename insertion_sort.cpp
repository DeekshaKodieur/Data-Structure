#include<iostream>
using namespace std;

int main()
{

    int a[20],i,j,size,temp, loc,min;
    cout<<"enter the size of an array : "<<endl;
    cin>>size;
    cout<<"enter the elements : "<<endl;

        for(i=0;i<size;i++)
        {
            cin>>a[i];

        }

     for(i=1; i<size ; i++)
       {
           temp=a[i];
           j=i-1;

           while(j>=0 && a[j]>temp)
           {
               a[j+1]=a[j];
               j-- ;

           }
           a[j+1] = temp;
       }


       cout<<"elements after insertion sort : ";
       for(i=0;i<size; i++)
       {
           cout<<" " <<a[i];

       }

return 0;

}



