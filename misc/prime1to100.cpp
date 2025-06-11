#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(i==1|| i==0)
        flag=1;
        if(flag==0)
        cout<<i<<"is prime"<<endl;
        else
        cout<<i<<"is not prime"<<endl;
    }
}