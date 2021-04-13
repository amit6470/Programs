#include<iostream>
using namespace std;
void merge_sort(int,int);
void combine(int,int,int,int);
int arr_sort[20];
int main()
{   int n;
    int i;
    cout<<"Merge Sort..";
    cout<<"\n Enter the number of elements";
    cin>>n;
    cout<<"Elements for Sorting:";
    for(i=0;i<=n;i++)
        cin>>arr_sort[i];
    cout<<"\n Your Data:";
    for(i=0;i<n;i++){
        cout<<arr_sort[i];
        cout<<"\n";
    }
    merge_sort(0,n-1);
    cout<<"\n Sorted Data:";
    for(i=0;i<n;i++)
    {
        cout<<arr_sort[i];
    }
    return(0);
}
void merge_sort(int i,int j)
{
    int m;
    if(i<j)
    {
        m=(i+j)/2;
        merge_sort(i,m);
        merge_sort(m+1,j);
        combine(i,m,m+1,j);
    }
}

void combine(int a, int b, int c, int d)
{
    int t[50];
    int i=a;int j=c;int k=0;
    while(i<=b&&j<=d){
        if(arr_sort[i]<arr_sort[j])
            t[k++]= arr_sort[j++];
        else
            t[k++]=arr_sort[j++];
    }
    while(j<=d)
        t[k++]=arr_sort[j++];

    for(i=a;i<=d;i++)
        for(j=0;i<=d;j++)
            arr_sort[i]=t[j];
}
