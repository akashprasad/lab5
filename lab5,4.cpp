#include<iostream>
using namespace std;
void marge(int x[],int y[],int a,int c, int (&k)[200])
 {
   for(int i=0;i<a+c;i++)
    {
	    if (i < a) {
      		k[i]=x[i];
	    } else if (i>=a && i < a+c) {
		    k[i] = y[i-a];
	    }
    }
 }
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
int main()
{
  int a[100],b[100],a1,a2;
  cout<<"Enter the limit of both the array(0 to 100): ";
  cin>>a1>>a2;
  cout<<"Enter the element of first array (0 to "<<a1<<") : "<<endl;
  for(int i=0;i<a1;i++)
   cin>>a[i];
  cout<<endl<<"Enter the element of second array (0 to "<<a2<<") : "<<endl;
  for(int j=0;j<a2;j++)
   cin>>b[j];
 int k[200];
 marge(a, b, a1, a2, k);
cout<<"maximum element of array : "<<largest(k,a1+a2);
cout<<"minimum element of array : "<<smallest(k,a1+a2);

  
return 0;
} 
