#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    int value,temp=0,i;
    cin>>value;
    int x;

    for(i=0;i<6;i++)
    {
   if(a[i]==value)
{
   temp=i;
   x=i+1;

}
    }
   if(temp==0)
   {
       cout<<"item not found";
   }
   else
   {
       cout<<"The element is at "<<temp<<"th index."<<endl;
         cout<<x<<" elements are compared.";
   }
    }
