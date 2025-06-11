#include<iostream>
using namespace std;
int findNcR(int n,int r)
{
    int res=1;
    for(int i=0;i<r;i++)
    {
        res=res*(n-i);
        res/=(i+1);
    }
    return res;
}
int main()
{
    int n=10,r=3;
    cout<<findNcR(n,r);
}