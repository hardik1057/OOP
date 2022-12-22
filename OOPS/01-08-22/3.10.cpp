//WAP to find smallest element stored in an array. 
#include <iostream>
using namespace std;
int main()
{
   int n, smallest;
   cout<<"Enter size of array- ";
   cin>>n;
   int num[n];
   for(int i=0;i<n;i++) 
       {
          cout<<"Enter Element "<<(i+1)<< "- ";
          cin>>num[i];
       }
   smallest = num[0];
   for(int i=1;i<n;i++) 
       {
          if(smallest >num[i])
             smallest = num[i];
       } 
   cout<<"Smallest element in array is- "<<smallest;
   return 0;
}