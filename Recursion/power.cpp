/*
    Given a number x (the base) we have to calculate x^y where y is the exponent.
    Here, y can be even or odd. For the even case x^y = x^y/2 * x^y/2 and for the odd 
    case x^y = x * x^y/2 * x^y/2 like for the real life example suppose 6^4 will be 6^4/2 * 6^4/2
    and for odd exponent like 6^5 will be 6 * 6^5/2 * 6^5/2.
*/

#include<bits/stdc++.h>
using namespace std;
int power(int a , int b){
    if(b==0)return 1;
    if(b==1)return a;
    int ans=power(a,b/2);
    if(a%2==0)return ans*ans;
    else return a*ans*ans;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int val=power(x,y);
    cout<<val;
}