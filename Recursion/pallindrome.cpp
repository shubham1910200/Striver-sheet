#include<iostream>
using namespace std;

bool pallindrome(string &str,int i,int length)
{
    if(str.empty())
    {
        return false;
    }
    if(i>=length/2)
    {
        return true;
    }
    if(str[i]!=str[length])
    {
        return false;
    }
    pallindrome(str,i+1,length-1);
    return true;
}
int main()
{
    string str;
    cin>>str;
    int length = str.length();
    bool ans = pallindrome(str,0,length-1);
    if(ans==true)
    {
        cout<<"Pallindrome "<<endl;

    }
    else
    {
        cout<<"Not Pallindrome "<<endl;
    }
}