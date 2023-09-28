#include<iostream>
using namespace std;
void reverse(int *arr,int i,int n)
{
    
    if(i>n/2)
    {
        return;
    }
     
     swap(arr[i],arr[n]);
     reverse(arr,i+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    reverse(arr,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}