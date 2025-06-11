// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={10,22,12,3,0,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int ldr[]={};
//     int pos=0;
 
//     for(int i=0;i<n;i++)
//     {
//         int flag=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 flag=1;
//                 break;
//             }
//             // if(flag==1)
//             // {
//             //     break;
//             // }
          
//         }
//         if(flag==0)
//         {
//             ldr[pos]=arr[i];
//             pos+=1;
//         }
//     }
//     cout<<pos;
//     //Printing the leader array 
//     for(int i=0;i<pos;i++)
//     {
//         cout<<ldr[i];
//     }
// }


//Better Solution
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,22,12,3,0,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>*max_element(arr+i+1,arr+n))
        {
            cout<<arr[i];
        }
        // cout<<*max_element(arr+i,arr+n);
    }

}