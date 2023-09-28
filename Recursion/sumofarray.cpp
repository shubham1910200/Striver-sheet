#include<iostream>
using namespace std;

//Functional Recursion
int sum(int n)
{
    
    if(n<1)
    {
        return 0;
    }
     int ans = n + sum(n-1);
     return ans;
}

//Parametrized Function
void printsum(int n, int sum)
{
    if(n<1)
    {
        cout<<"add = "<<sum<<endl;
        return;
    }
    printsum(n-1,sum+n);
}
int main()
{
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int ans = sum(n);
    cout<<"sum:"<<ans<<endl;
    printsum(n,0);

}