/*
    You are given two integers m and n.
    Find the mth prime no, calcualte the digit sum of that number
     until it becomes a single digit and then multiply with the
     that digit.
     
     Sample :
     Input : 6
     Output : 52 (the 6th prime no is  13 so it sum to 4 and 13 x 4 = 52)

     Input : 10
     Output : 58(the 10th prime no is  29 that sum to single digit 11 and then 2 so 29 x 2 = 58)
*/

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<2)return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int m,count=0,sum=0,rem,val,deval,i=1,result;
    cin>>m;
    while(count!=m)
    {
        if(isPrime(i++))count++;
        if(count==m)val=i-1;
    }
    deval=val;
    while(val!=0)
    {
        rem=val%10;
        sum+=rem;
        val/=10;
        if(sum>9 && val==0)
        {
            val=sum;
            sum=0;
        }
    }
    result=deval*sum;
    cout<<result;
}