#include<bits/stdc++.h>
using namespace std;

void print(int ind,int *arr,vector<int>&ds,int n,int sum,int k)
{
    if(ind==n)
    {
        if(sum==k)
        {
            for(auto it:ds)
            {
                if(it!=0)
                {
                    cout<<it<<" ";
                }
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    // cout<<"sum: "<<sum<<endl;
    print(ind+1,arr,ds,n,sum,k);
    sum-=arr[ind];
    ds.pop_back();
    print(ind+1,arr,ds,n,sum,k);

}

int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int *arr = new int[n];
    vector<int>ds(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<endl;
    int k;
    cout<<"k value is "<<endl;
    cin>>k;
    print(0,arr,ds,n,0,k);

}