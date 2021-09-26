#include<iostream>
using namespace std;
int main()
{
int i,j,key,n,shifts=0,comp=0;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
    for (i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
        key=arr[i];
        j=i-1;
        while(j>=0 && key<arr[j])
        {
            arr[j+1]=arr[j];
            --j;
            ++shifts;
            ++comp;
        }
        arr[j+1]=key;
        ++shifts;
    }
}
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << "\nComparisons = " << comp << "\nShifts = " << shifts << endl;
    return 0;
}
