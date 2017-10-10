# lab5
// question 1
#include<iostream>
using namespace std;
int sum_array(int a[],int n)
{
  int sum=0;
  for(int x=0;x<n;x++)
  {
    sum=sum+a[x];
  }
  return sum;
}
int main()
{
  int ar[100],l;
  cout<<"Enter the limit of array(0 to 100): ";
  cin>>l;
  cout<<"Enter the element of array (0 to "<<l<<") : ";
  for(int i=0;i<l;i++)
   cin>>ar[i];
  cout<<"The sum of element of array : "<<sum_array(ar,l);
  return 0;
}
