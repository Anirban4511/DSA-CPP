/*
Given an array a of N integers. Given Q queries and in each query given a number X, print count of that number in array.

Constarints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int q;
	cin>>q;

	while(q--)
	{
		int count=0;
		int x;
		cin>>x;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==x)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}
