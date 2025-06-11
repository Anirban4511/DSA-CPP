#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1, -2, 3, 4, -3, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count_pos = 0, count_neg = 0;
    int res[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {

            count_pos++;
        }
        else
        {
            count_neg++;
        }
    }
    int pos[count_pos];
    int neg[count_neg];
    int p1 = 0, n1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg[n1] = arr[i];
            n1++;
        }
        else
        {
            pos[p1] = arr[i];
            p1++;
        }
    }
    //    cout<<endl<<"Printing the negative array - "<<endl;
    //    for(int i=0;i<count_neg;i++)
    //    {
    //     cout<<neg[i];
    //    }
    //    cout<<endl<<"Printing the positive array - "<<endl;
    //    for(int i=0;i<count_pos;i++)
    //    {
    //     cout<<pos[i];
    //    }
    // Merging the postive and negative
    if (count_pos > count_neg)
    {
        for (int i = 0; i < count_neg; i++)
        {
            res[2 * i] = pos[i];
            res[(2 * i) + 1] = neg[i];
        }
        // Printing the rest positive element
        for (int i = count_pos; i < n; i++)
        {
            res[i] = pos[i - count_neg];
        }
    }
    else
    {
        for (int i = 0; i < count_pos; i++)
        {
            res[2 * i] = pos[i];
            res[(2 * i) + 1] = neg[i];
        }
        for (int i = count_neg; i < n; i++)
        {
            res[i] = neg[i - count_pos];
        }
    }
    // Printing the resultant array
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}