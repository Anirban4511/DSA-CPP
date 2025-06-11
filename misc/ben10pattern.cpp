#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 9)
            {
                cout << "*";
            }
            cout << endl;
            if (i <= 9 / 2)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << "";
                }
                cout << "*";
                for (int j = i; j < 9 / 2; j++)
                {
                    cout << "";
                }
                cout << "*";
                for (int j = 0; j < i; j++)
                {
                    cout << "";
                }
            }
        }
        cout<<endl;
    }
}
