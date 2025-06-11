// #include<bits/stdc++.h>          will not be applicable as it find the corresponding first and last pair
// using namespace std;
// int main()
// {
//     int arr[]={2,6,9,8,11};
//     vector<vector<int>>v;
//     int target=17;
//     int i,j,sum;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     i=0;
//     j=n-1;
//     while(n--)
//     {
//         if(i==j)break;
//         sum=0;
//         sum=arr[i]+arr[j];
//         if(sum==target)
//         {
//             v.push_back({i,j});
//         }
//         i++;
//         j--;
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         for (int j = 0; j < v[i].size(); j++) {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,5,3,9,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    unordered_map<int,int>mp;
    for(int i=0;i<size;i++)
    {
        int complement=target-arr[i];
        if(mp.count(complement))
        {
            cout<<"The indexes are :"<<mp[complement]<<" : "<<i<<endl;
            cout<<"The values are :"<<complement<<" : "<<arr[i]<<endl;
        }
        mp[arr[i]]=i;
    }
    // to check printing the values in the map
    for(auto it:mp)
    {
        cout<<"Keys :"<<it.first<<"Values :"<<it.second<<endl;
    }
}