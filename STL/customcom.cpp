#include<bits/stdc++.h>
using namespace std;

/*
    for the custom comparator case the inbuild function of comparator in sort function
    accept false for swap and true for not swap
*/
bool comp(int a ,int b)
{
    return a>b;//designed for decreasing order
}
int main()
{
    vector<int>a={23,2,13,4,243};
    /*
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(!cmp(a[i],a[j]))swap(a[i],a[j]);
        }
    }
        this is the inner function which works in the 
        sort(a.begin(),a.end(),comp);
    */ 
   sort(a.begin(),a.end());//default sort function for ascending order
   for(int i=0;i<a.size();i++)
   {
    cout <<a[i]<<" ";
   }
   cout<<endl;
   //descending order sort function using custom comparator function
   sort(a.begin(),a.end(),comp);
   for(int i =0;i<a.size();i++)
   {
    cout<<a[i]<<endl;
   }

}