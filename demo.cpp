#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   
   int mx=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]>mx)
      {
         mx=arr[i];
      }
   }
   cout<<mx<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<"  ";
   }
   return 0;
}

