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


       for(i=0; i<(size-1) ; i++)
       {
          int swap=0;

           for(j=0 ; j<(size-i)-1 ; j++)
           {
               if(a[j]>a[j+1])
               {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
                   swap=1;
               }

           }

           if (swap==0)







           {
               break;
           }

       }

       cout << "elements after bubble sorting :" ;

       for(i=0;i<size;i++)
       {
           cout<<" " <<a[i];
       }

    return 0;
}
