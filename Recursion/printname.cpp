#include<iostream>
using namespace std;


void fun1(int i,int n)
{	
	if(i>n)
	{
		return;
	}
	cout<<i<<" "<<"Shubham"<<endl;
	fun1(i+1,n);
	
}

void fun2(int i,int n)

{
	if(i>n)
	{
		return;
	}
	cout<<i<<endl;
	fun2(i+1,n);
}

void fun3(int n)
{
	if(n<1)
	{
		return;
	}
	cout<<n<<endl;
	fun3(n-1);
		
}

int main()
{
	int n;
	cin>>n;
//	fun1(1,n);
//	fun2(1,n);
	fun3(n);
}



