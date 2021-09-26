#include<iostream>
using namespace std;
int main()
{
int i,j,temp,n,swap,swaps=0,comp=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n-1;i++)
{
    temp=i;
for(j=i+1;j<n;j++)
    {
        if(a[temp]>a[j])
        {
            ++comp;
            temp=j;
    }
    }

if(temp!=i)
{
   swap=a[i];
    a[i]=a[temp];
    a[temp]=swap;
    ++swaps;
}
}

for( i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout << "\nComparisons = " << comp << "\nSwaps = " << swaps << endl;
}

