#include<iostream>
using namespace std;
int main()
{
    int n,i,a[20],low, high, mid, item;

    cout<<"Enter the number of elements in the array in sorted order:";
    cin>>n;
    cout<<"Enter the elements in the array";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the item to be searched for";
    cin>>item;
    low=1;
    high=n;
    mid=(low+high)/2;
    while(low<=high && a[mid]!=item)
    {


    if(a[mid]<item)
        low=mid+1;
    else
        high=mid-1;

    mid=(low+high)/2;
    }
    if(a[mid]==item)
    {
        cout<<"\n Data is found at location "<<mid;

    }
    else
        cout<<"Data not found";

    return(0);

}
