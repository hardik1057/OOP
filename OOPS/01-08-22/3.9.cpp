//WAP to find largest element stored in an array. 
#include <iostream>
using namespace std;
int main()
{
   int n, largest;
   cout<<"Enter size of array- ";
   cin>>n;
   int num[n];
   for(int i=0;i<n;i++) 
       {
          cout<<"Enter Element "<<(i+1)<< "- ";
          cin>>num[i];
       }
   largest = num[0];
   for(int i = 1;i < n; i++) 
       {
          if(largest < num[i])
             largest = num[i];
       } 
   cout<<"Largest element in array is- "<<largest;
   return 0;
}