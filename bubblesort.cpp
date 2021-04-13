#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the element in the array:";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    cout<<" the elements after sorting are:";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
return(0);
}
