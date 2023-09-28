#include<bits/stdc++.h>
using namespace std;

void sub_sequence(int *arr,int i,int n,vector<int>&ds)
{
    if(i==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    if(ds.size()==0)
    {
        cout<<"";
    }
  
    ds.push_back(arr[i]);
    sub_sequence(arr,i+1,n,ds);
    ds.pop_back();
    sub_sequence(arr,i+1,n,ds);
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int *arr = new int[n];
    vector<int>ds;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Subsequence is "<<endl;
    sub_sequence(arr,0,n,ds);
}