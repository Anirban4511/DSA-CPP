// This is using the Top-Down Approach -> Recursion + Memoization(way of storing table aka array here)
#include <iostream>
#include <vector>
using namespace std;
int fibonacci(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    return dp[n];
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    // for(int i=0;i<=n;i++)
    // {
    //     dp[i]=-1;
    // }
    cout << "The " << n << "th fibonacci number is - " << fibonacci(n, dp);
}

// Time Complexity - O(1) here but if we initialise every element as -1 using any loop then
// time complexity will be like O(N)
// Space complexity - O(N)+O(N) 
