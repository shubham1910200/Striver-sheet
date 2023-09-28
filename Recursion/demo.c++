#include<iostream>
using namespace std;

//Call by value
int fun1(int a)
{
    a++;
}
//Call by reference
int fun(int &a)
{
    a++;
}
int main()
{
    // cout<<"HEllo"<<endl;
    // int a;
    // cin>>a;
    // cout<<"a = "<<a<<endl;
    // char s;  // Character sirf ek hi character leta hai
    // cin>>s;
    // cout<<"Character is   = "<<s<<endl;

    // Array 
    // int a[10] = {10,20,30,40,50};
    // cout<<a<<endl; //first element adress and array adress are same
    // cout<<sizeof(a)<<endl; // size of array is 40
    // cout<<"Size of array length is = "<<sizeof(a)/sizeof(a[1])<<endl;

    // create Array using dynamic
    // int *arr = new int[n];

   // Pointer
   /*
int a = 10;
   int *b = &a;
   int *c = b;
   cout<<&c<<endl;
   cout<<&a<<endl;
   cout<<&b<<endl;
   cout<<*c<<endl;
   cout<<++(*c)<<endl;
   cout<<a<<endl;

  cout<<a<<endl;
   cout<<"Adress of a = "<<b<<endl;
   cout<<&a<<endl;
   cout<<"value of a = "<<*b<<endl;
   cout<<"Increment the value of a = "<<(*b)++<<endl; //10 
   cout<<"The value of a is = "<<a<<endl; //11
   cout<<"The value if a is = "<<++(*b)<<endl; //12
   int *c = b;
   cout<<"The value of c is = "<<c<<endl;
   cout<<"The adress of c is = "<<b<<endl;
   
// Double Poninter

    int a = 10;
    int *b = &a;
    int **c = &b;
    cout<<c<<endl;
    cout<<(*c)<<endl;
    cout<<(**c)<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<++(**c)<<endl;
    
   int a = 20;
   int *p = &a;
   int *c = p;
   cout<<c<<endl;
   cout<<&p<<endl;
   cout<<p<<endl;
   cout<<*c<<endl;
   cout<<++(*c)<<endl;
   

  int a = 100;
  int b = 200;
  int *p = &a;
  int *q =  &b;
  p = q;
  cout<<p<<endl;
  cout<<*p<<endl;


int arr[10];
cout<<arr<<endl;
cout<<&arr[0]<<endl;



int a [10];
cout<<a<<endl;
cout<<&a<<endl;
int *p = &a[0];
cout<<p<<endl;



    // Character Pointer

    int a[] = {1,2,3};
    char b[] = "abc";
    cout<<a<<endl;
    cout<<a[0]<<endl;
    char *c = &b[0];
    cout<<c<<endl;
    cout<<b[0]<<endl;
    

   int i = 65;
   char c = i;
   cout<<c<<endl;
   int *p = &i;
   char *pc = (char *)p;
   cout<<*p<<endl;
   cout<<*pc<<endl;
   cout<<c++<<endl;
   cout<<*(pc+1)<<endl;
   cout<<*p<<endl;
   


int i = 10;
int &j = i;
i++;
cout<<j<<endl;
j++;
cout<<i<<endl;


int i = 10;
// fun(i);
fun1(i);
cout<<i<<endl;



int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout<<a<<" "<<b;


//Dynamic memory allocation

int j = 12;
const int &k = j;
cout<<k<<endl;
j++;
cout<<k<<endl;
cout<<j<<endl;


int j = 12;
int const *p2 = &j;
cout<<*p2<<endl;
j++;
cout<<j<<endl;
cout<<*p2<<endl;
*/











}