#include <iostream>
// using namespace std;
// int *reverseArray(int arr[],int *s,int *e);
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int *s, *e;
//     s = &arr[0];
//     e = &arr[n - 1];
//     int *reversed=reverseArray(arr,s,e);
//     for (int i = 0; i < n; i++) {
//         cout << reversed[i] << " ";
//     }
//     cout << endl;
// }
// int *reverseArray(int arr[], int *s, int *e)
// {
//     if (s == e)
//     {
//         return arr;
//     }
//     int temp = *s;
//     *s = *e;
//     *e = temp;
//     return reverseArray(arr,s++,e--);
// }