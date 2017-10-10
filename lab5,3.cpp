# lab5
// question 3
#include<iostream>
using namespace std;     
int increasing( int a[],int n,int m)
{
  int temp;
  for(int k=0;k<n;k++)
  {
    for(int i=0;i<n-1;i++)
    {
     if(a[i]>a[i+1])
     {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
     }
    }
  }
 return a[m];
} 
int decreasing( int a[],int n,int m)
{
  int temp;
  for(int k=0;k<n;k++)
  {
    for(int i=0;i<n-1;i++)
    {
     if(a[i]<a[i+1])
     {
      temp=a[i+1];
      a[i+1]=a[i];
      a[i]=temp;
     }
    }
  }
 return a[m];
}
 
int main()
{
  int ar[100],l,k;
  cout<<"Enter the limit of array(0 to 100): ";
  cin>>l;
  cout<<"Enter the element of array (0 to "<<l<<") : ";
  for(int i=0;i<l;i++)
   cin>>ar[i];
  cout<<"Enter kth smallest/largest term : ";
  cin>>k;
  cout<<k<<" th smallest element of array "<<increasing(ar,l,k-1);
  cout<<endl<<k<<" th largest element of array "<<decreasing(ar,l,k-1);

  return 0;
}
