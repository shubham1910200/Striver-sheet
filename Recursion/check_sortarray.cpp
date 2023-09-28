#include<iostream>
using namespace std;

bool is_sort(int arr[],int size)
{   
    if(size==0 || size==1)
    {
        return true;
    }

   if(arr[0]>arr[1])
   {
    return false;
   }
    bool issmall = is_sort(arr+1,size-1);
    return issmall;

}
int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    bool ans = is_sort(arr,size);
    if(ans)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

}