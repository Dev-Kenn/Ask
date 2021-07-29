#include <iostream> 
#include <conio.h>
using namespace std;

int main () { 

    int arr[20],i,n,sum=0;

   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<< n <<" elements in Array: \n";
   for(i=0;i<n;i++) {
   cin>>arr[i];
   }

   return 0;
}