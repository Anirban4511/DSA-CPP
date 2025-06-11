// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[4][4];
//     int res[4][4];
//     //taking input for the matrix
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     // printing the matrix
//     for(int i=0;i<3;i++)
//     {
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 cout<<arr[i][j];
//             }
//             cout<<endl;
//         }
//     }
//     //logic to rotate the matrix in the 90 degree angle
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             res[j][3-i-1]=arr[i][j];
//         }
//     }
//     //printing the rotate matrix
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<res[i][j];
//         }
//         cout<<endl;
//     }
// }

// TC - O(n^2) and SC - O(n^2)
// using optimal solution so that we don't have to use the extra array to occupy another O<n^2)
// It will first transpose using swap mechanism and then reverse every row
#include <iostream>
#include <algorithm>
using namespace std;
const int r = 4, c = 4;
void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
int main()
{
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    // swapping calling
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            swap(&arr[i][j], &arr[j][i]);
        }
    }
    cout<<"printing the transpose matrix"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }
    // reversing the transpose array to get the desired 90-degree matrix
    for (int i = 0; i < r; i++)
    {
        reverse(arr[i], arr[i] + c);
    }
    cout<<"After rotating 90 Degree"<<endl;;
       for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }
}
