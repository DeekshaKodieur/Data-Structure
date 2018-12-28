#include<iostream>

using namespace std;

void shell_sort(int a[],int n)
{
    int gap,i,j,k,temp;
    gap=n/2;


        for(i=gap ; i>0 ; i=i/2)
        {
            for(j=i;j<n;j++)
            {
                for( k=j-i ; k>=0 ; k=k-i )
                {
                   if (a[k+i] >= a[k])
                   {
                       break;

                   }
                   else
                    {
                        temp=a[k];
                        a[k]=a[k+i];
                        a[k+i]=temp;

                    }


                }
            }
        }
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

    shell_sort(a,n);

    cout<<"Elements after shell sort : ";

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
    cout<<endl;

return 0;
}

