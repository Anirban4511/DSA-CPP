// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr[], int low, int mid, int high)
// {
//     // int length=sizeof(arr)/sizeof(arr[0]);
//     int left = low;
//     int right = mid + 1;
// vector<int> temp;

//     while (left <= mid && right <= high)
//     {
//         if (arr[left] < arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for (int i = 0; i < temp.size(); i++)
//     {
//         cout<<temp[i]<<endl;
//     }
// }
// void mergeSort(int arr[], int low, int high)
// {
//     if (low >= high)
//         return;
//     int mid = (low + high) / 2;
//     mergeSort(arr, low, mid);
//     mergeSort(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }
// int main()
// {
//     int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     mergeSort(arr, 0, length - 1);

//     // printing the all sorted elements
//     // for (int i = 0; i < length; i++)
//     // {
//     //     cout << arr[i] << endl;
//     // }
// }
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, length - 1);

    // Printing the sorted elements
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
