#include<iostream>
using namespace std;
void pattern1(int n)
{
    int start = 1;
    for(int i = 0;i<n;i++)
    {
        
        if(i%2==0) start=1;
        else start=0;
       
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void pattern4(int n)
{

int space = 2*(n-1);
    for(int i =1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
       for(int j=i;j>=1;j--)
       {
        cout<<j;
       }
        cout<<endl;
        space=space-2;
    }
}
int main()
{
    int n;
    cin>>n;
    // pattern1(n);
    pattern4(n);

}