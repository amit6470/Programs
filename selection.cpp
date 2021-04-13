#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp,mini,loc;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the element in the array:";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {

        mini=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {

            if (mini>a[j])
            {
                mini=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<" the elements after sorting are:";
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
return(0);
}

