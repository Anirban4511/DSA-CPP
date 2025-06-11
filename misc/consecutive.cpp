// Write a program to determine the consecutive 1 in a 2D Matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the row of the matrix - " << endl;
    cin >> m;
    cout << "Enter the column of the matrix - " << endl;
    cin >> n;
    int arr[m][n];
    cout << "Enter the values of the matrix "<<endl;

    // entering the values of the matrices
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing the values of the matrices
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    int count = 0, max = 0, point = 0;
    for (int i = 0; i < m; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
         
            if (arr[i][j] == 1)
            {
                count++;
            }
              if (count > max)
            {
                max = count;
                point = i;
            }
            if(arr[i][j] != 1)
            {
                count = 0;
            }
        }
    }
if(max==0)
{
    cout<<"1 is not present in the matrix"<<endl;
}
else{
    cout << "The maximum consecutive 1 is present in the " << point << "th row and total " << max << " consecutive 1 is present";
}
}