//---------Majority Element of an given array---------------
/* Brute Force Approach*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,3,1,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
//         if(count>(n/2))
//         {
//             cout<<arr[i];
//         }
//     }
// }

// Better Approach - Hash Array or Frequency Array
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int hash[(*max_element(arr,arr+n))+1]={0};
//     for(int i=0;i<n;i++)
//     {
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<(*max_element(arr,arr+n))+1;i++)
//     {
//         cout<<hash[i]<<endl;
//         if(hash[i]>n/2)
//         {
//             cout<<i<<endl;
//         }
//     }
// }

// Moore's Voting Algorithm
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	// int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	int el=0;
	for(int i=0;i<n;i++)
	{
		if(count==0)
		{
			el=arr[i];
			count=1;
		}
		else if(el==arr[i])
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(el==arr[i])
		{
			c++;
		}
	}
	if(c>n/2)
	{
		return el;
	}
	return -1;

}
