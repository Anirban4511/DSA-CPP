#include <bits/stdc++.h>
using namespace std;
bool flag = false;
void printS(int i, vector<int> &ds, int target, int arr[], int sum, int n)
{
    if (i == n)
    {
        if (sum == target && flag == false)
        {
            flag = true;
            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    sum += arr[i];
    printS(i + 1, ds, target, arr, sum, n);
    sum -= arr[i];
    ds.pop_back();
    printS(i + 1, ds, target, arr, sum, n);
}
int main()
{
    int arr[] = {2,1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2, sum = 0;
    vector<int> ds;
    printS(0, ds, target, arr, sum, n);
}