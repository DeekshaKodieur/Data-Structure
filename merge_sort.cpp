#include<iostream>
using namespace std;


void merge_(int *a, int s, int e)
{
    int mid = (s+e)/2;

     int i=s;
     int j=mid+1;
     int k=s;

     int temp[100];

     while(i<=mid && j<=e)
     {
         if(a[i]<a[j])
         {
             temp[k]=a[i];
             i++;
         }
         else
         {
              temp[k]=a[j] ;
              j++;

         }
         k++;
     }

     while (i<=mid)
     {
         temp[k]=a[i];
         i++;
         k++;
     }

     while(j<=e)
     {
         temp[k]=a[j];
         j++;
         k++;
     }

     for( int i=s;i<=e;i++)
     {
         a[i]=temp[i];
     }




}


void merge_sort(int a[],int s, int e)
{
    if (s>=e)
    {
        return;
    }
    int mid = (s+e)/2;

    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    merge_(a,s,e);
}


int main()
{
    int a[100],n;
    cout<<"Total number of elements :    " ;
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements : " <<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    merge_sort(a,0,n-1);

    cout<<"Elements after merge sort : ";

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }

return 0;
}
