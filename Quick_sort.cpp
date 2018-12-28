#include<iostream>

using namespace std;

int partition(int *a, int s , int e)
{
    int i=s-1;
    int j;
    int pivot=a[e];
    for(j=s ; j<e;j++)
    {
       if(a[j]<=pivot)
       {
           i++;
           swap(a[i],a[j]);
       }
    }

    swap(a[i+1],a[e]);
    return i+1;

}

void quick_sort(int *a,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(a,s,e);  //for finding p
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);

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
    cout<<endl;

    quick_sort(a,0,n-1);

    cout<<"Elements after quick sort : ";

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
    cout<<endl;

return 0;
}


















