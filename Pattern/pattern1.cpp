#include<iostream>
using namespace std;
void pattern1(int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n-i+1;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i = 0;i<n;i++)
    {
        //space
        for(int j = 0;j<n-i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j =0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j = 0;j<n-i+1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j = 0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j =0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j= 0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j= 0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j =0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

void pattern6(int n)
{
    for(int i =1;i<=2*n-1;i++)
    {
        int star = i;
       if(i>n) 
       {
        star=2*n-i;
       }
      
       for(int j = 1;j<=star;j++)
       {
        cout<<"*";
       }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
  
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    pattern6(n);
}