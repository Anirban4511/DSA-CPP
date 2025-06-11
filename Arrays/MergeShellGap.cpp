/*
This is the optimized approach of merging two sorted arrays(inplace : without using any extra space)
This is using the shell sort technique using the gap method 
*/

#include<bits/stdc++.h>
using namespace std;
class Merge{
    private:
    void swapifGreater(long long arr1[],long long arr2[],int ind1,int ind2)
    {
        if(arr1[ind1]>arr2[ind2])
        {
            swap(arr1[ind1],arr2[ind2]);
        }
    }
    public:
    void merge(long long arr1[],long long arr2[],int n,int m)
    {
        int len=n+m;
        int gap=(len/2)+(len%2);
        while(gap>0)
        {
            int left=0;
            int right=left+gap;
            while(right<len)
            {
                if(left<n && right>=n)
                {
                    swapifGreater(arr1,arr2,left,right-n);
                }
                else if(left>=n)
                {
                    swapifGreater(arr2,arr2,left-n,right-n);
                }
                else{
                    swapifGreater(arr1,arr1,left,right);
                }
                left++, right++;
            }
            if(gap==1)break;
            gap=(gap/2)+(gap%2);
        }
    }
};
int main()
{
    long long arr1[]={1,3,5,7};
    long long arr2[]={0,2,6,8,9};
    int n,m;
    n=sizeof(arr1)/sizeof(arr1[0]);
    m=sizeof(arr2)/sizeof(arr2[0]);
    Merge mg;
    mg.merge(arr1,arr2,n,m);
}