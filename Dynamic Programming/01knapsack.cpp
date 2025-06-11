//Given the weight array wt[]={1,2,3}
//Given the value array val[]={2,3,4}
//Given the Max Weight W=5

// #include<iostream>
// using namespace std;
// int knapSack(int wt[],int val[],int W,int n);
// int main()
// {
//     int wt[]={30,10,20};
//     int val[]={120,60,100};
//     int maxWeight=50;
//     int n=sizeof(wt)/sizeof(wt[0]);
//     cout<<"The maximum profit one can have from this - "<<knapSack(wt,val,maxWeight,n);

// }
// int knapSack(int wt[],int val[],int W,int n)
// {
//     if(n==0||W==0)
    
//         return 0;
    
//     if(wt[n-1]<=W)
    
//         return max(val[n-1]+knapSack(wt,val,W-wt[n-1],n-1),knapSack(wt,val,W,n-1));
    
//     else
//         return knapSack(wt,val,W,n-1);
    
// }
#include<bits/stdc++.h>
using namespace std;
int t[4][4];
int knapSack(int wt[],int val[],int W,int n);
int main()
{
    memset(t,-1,sizeof(t));
    
    int wt[]={1,2,3};
    int val[]={2,3,4};
    int maxWeight=5;
    int n=sizeof(wt)/sizeof(wt[0]);
    // int t[n+1][maxWeight+1];
    cout<<"The maximum profit one can have from this - "<<knapSack(wt,val,maxWeight,n);

}
int knapSack(int wt[],int val[],int W,int n)
{
    if(n==0||W==0)
        return 0;
        if(t[n][W]!=-1)
        return t[n][W];
    
    if(wt[n-1]<=W)
    
        return t[n][W]=max(val[n-1]+knapSack(wt,val,W-wt[n-1],n-1),knapSack(wt,val,W,n-1));
    
    else
        return t[n][W]= knapSack(wt,val,W,n-1);
    
}