#include<iostream>
using namespace std;
int binary_s(int a[],int l,int n);
int main()
{
    int n=55;
    int a[]= {1,2,3,4,5,6,7,8};
    cout<<"found at location",binary_s(a[],8,n);
    return(0);
}
int binary_s(int a[],int l,int n)
{

int low=0;
int high=n-1;
while(low<=high)
{
  int mid= (low+high)/2:
  if(a[mid]==l)
  {
      return mid;

  }
  else
     if(item<a[mid])
  {
      high=mid+1;

  }
  else
     low=mid+1;
}
return -1;

}
