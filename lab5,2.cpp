# lab5
// question 2
#include<iostream>
using namespace std;
int largest(int a[],int n)
{
  int max=a[0];
  for(int x=1;x<n;x++)
  {
    if(a[x]>max)
     max=a[x];
  }
  return max;
}
int smallest(int a[],int n)
{
  int min=a[0];
  for(int j=1;j<n;j++)
  {
     if(a[j]<min)
       min=a[j];
  }
  return min;
}
float mean(int a[],int n)
{
  int sum=0;
  for(int k=0;k<n;k++)
  {
    sum=sum+a[k];
  }
  return (sum/n);
}
float median( int a[],int n)
{
  float  med;int temp;
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
  if(n%2==0)
  {
     float sum=a[n/2]+a[(n/2)-1];
    med=sum/2;
  }
  else
    med=a[n/2];
  return med;
}
int fre(int a[],int n,int k)
{
  int fe=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==k)
     fe++;
  }
  return fe;  
}
int highest(int a[],int n)
{
  int mod=a[0];
  int fr=0;
  for(int i=0;i<n;i++)
  {
    if(fre(a,n,a[i])>fr)
    {
     mod=a[i];
     fr=fre(a,n,a[i]);
    }
  } 
  return mod;
}   
int main()
{
  int ar[100],l;
  cout<<"Enter the limit of array(0 to 100): ";
  cin>>l;
  cout<<"Enter the element of array (0 to "<<l<<") : ";
  for(int i=0;i<l;i++)
   cin>>ar[i];
  cout<<"The largest element of the array : "<<largest(ar,l);
  cout<<endl<<"The smallest element of the array : "<<smallest(ar,l);
  cout<<endl<<"The mean of the elements of array : "<<mean(ar,l)<<endl;
  cout<<endl<<"the median of the element of array : "<<median(ar,l);
  cout<<endl<<"The highest frequency of the element of array : "<<highest(ar,l);
  return 0;
} 
