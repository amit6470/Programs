#include<iostream>
using namespace std;
int getmax(int a[], int n)
{
    int max= a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max= a[i];

    }
    return max;
}
void countsort(int a[],int n,int e)
{
    int output[n], i, count[10]={0};
    for(i=0;i<n;i++)
        count[(a[i]/e)%10]++;
    for(i=0;i<10;i++)
        count[i]+=count[i-1];
    for(i=n-1;i>=0;i--)
    {
        output[count[(a[i]/e)%10]-1]=a[i];
        count[(a[i]/e)%10]--;
    }
    for(i=0;i<n;i++)
        a[i]=output[i];
}
void radix_sort(int a[],int n)
{
    int e,c;
    c=getmax(a,n);
    for(e=1;c/e>0;e*=10)
        countsort(a,n,e);
}
int main()
{
    int a[50],n,i;
    cout<<"Enter the no. of elements to be sorted:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the element:";
        cin>>a[i];
    }
    radix_sort(a,n);
    cout<<"The sorted elements are :";
    for(i=0;i<n;i++)
        cout<<"\t"<<a[i];
    return(0);
}
