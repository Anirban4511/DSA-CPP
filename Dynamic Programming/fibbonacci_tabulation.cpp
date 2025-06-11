//Fibonacci using Bottom Up Approch aka Tabulation
// Trying to optimise the space complexity without recursion
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector <int>dp(n+1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2;i<=n;i++)
//     {
//         dp[i]=dp[i-1]+dp[i-2];
//     }
//     cout<<dp[n];
// }

//Time - O(N) || Space - O(N)

// We can optimise the space complexity to O(1)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev1=1,prev2=0,curr=0;
    for(int i=2;i<=n;i++)
    {
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    cout<<"The "<<n<<"th fibonacci term will be "<<curr;
}
