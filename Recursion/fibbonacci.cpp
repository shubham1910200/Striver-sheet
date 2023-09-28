#include<iostream>
using namespace std;

int fibbo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    int totalsum = fibbo(n-1)+fibbo(n-2);
    return totalsum;

}
int main()
{
    int n;
    cin>>n;
    int ans = fibbo(n);
    cout<<"The result is = "<<ans<<endl;
}