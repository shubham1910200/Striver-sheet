#include<bits/stdc++.h>
using namespace std;
void ExplainPair()
{
    // pair<int,int>p = {1,3};
    // cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int> >p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;
    pair<int,int>arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}

/*Vector is container that is dynamic in nature*/
void ExplainVector()
{
    vector<int>v;  {}
    v.push_back(1);
    v.emplace_back(2);  /*push_back and emplace_back both are similar*/

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int>vec1(5,100); //{100,100,100,100,100}
    vector<int>vec2(5); //{0,0,0,0,0}
    vector<int>vec3(5,20);  //{20,20,20,20,20}
    vector<int>vec4(vec3);  // another container we copy it.

        
    /*Note-> If declare size after we can increase size*/
    cout<<"First "<<v[0]<<" "<<v.at(0)<<endl; //both are same
    for(vector<int>::iterator it=v.begin(); it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //v.begin() it point the memory not element.

    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    // delete the vector
    v.erase(v.begin()+1); // remove 2
    for(auto it:v)
    {
        cout<<it<<" ";  //1
    }
    cout<<endl;

    /* v.erase(v.begin(),v.end() +1)*/

    // Insert function
    vector<int>v1(2,100); // {100,100}
    v1.insert(v1.begin(),300); //{300,100,100}
    v1.insert(v1.begin() +2,2,10); //{300,100,10,10,100}
    for(auto it:v1)
    {
        cout<<it<<" "; 
    }

}
int main()
{
    // ExplainPair();
    ExplainVector();
}