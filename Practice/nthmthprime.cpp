/*
Write a program that takes x and y as an input
and calculate the xth and yth prime no and prints
output as xy-1;
*/

//Normal Approach

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int flag;
//     int x,y,z,xthprime,ythprime,countx,county;
//     cin>>x>>y;
//     if(x>y)z=x;
//     else z=y;
//     countx=0;
//     county=0;
//     for(int i=2;i<z*z;i++)
//     {
//         flag=1;
//         for(int j=2;j<=i/2;j++)
//         {
//             if(i%j==0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//         if(flag==1)
//         {
//            if(countx!=x)
//            { countx++;
//             xthprime=i;
//            }
//            if(county!=y)
//            {
//             county++;
//             ythprime=i;
//            }
           
//         }
//     }
//     cout<<xthprime<<endl<<ythprime;
//     // cout<<(xthprime*ythprime)-1;
// }


// Function Approach - Better

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<2)return false;
    int flag=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return true;
    }
    else return false;
}

int nthPrime(int n)
{
    int count=0;
    int num=1;
    while(count!=n)
    {
        num=num+1;
        if(isPrime(num))
        {
            count++;
        }
    }
    return num;

}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"Xth Prime is "<<nthPrime(x)<<endl;
    cout<<"Yth Prime is "<<nthPrime(y)<<endl;
}