#include<iostream>
using namespace std;
void swap( int*a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int divide(int a[], int l, int h)
{
    int key= a[h];
    int i= (l-1);
    for(int j=l;j<=h-1;j++)
    {
      if (a[j]<key)
      {
          i++;
          swap(&a[i],&a[j]);

      }
    }
    swap(&a[i+1], &a[h]);
    return(i+1);
}
void quick_sort(int a[], int l, int h)
{
    if (l<h)
    {
        int p= divide(a,l,h);
        quick_sort(a, l, p-1);
        quick_sort(a, p+1, h);
    }
}
int main()
{
    int a[50],n,i;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    quick_sort(a,0,n-1);
    cout<<"THe sorted order array is:";
    for(i=0; i<n; i++)
        cout<<"\t"<<a[i];
    return 0;
}
