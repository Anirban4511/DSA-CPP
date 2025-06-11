#include <iostream>
using namespace std;
int binaryConverter(int n);
bool magicalNumber(int n);
int main()
{
    int n;
    cin >> n;
    cout << "Magical numbers are from 1 to " << n << "-" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (magicalNumber(i))
        {
            cout << i << endl;
        }
    }
}
bool magicalNumber(int n)
{
    int x = binaryConverter(n);
    int i = 0;
    string s = to_string(x);
    while (i < s.length())
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '2';
        }
        i++;
    }

    i = 0;
    int result = 0;
    while (i < s.length())
    {
        result += s[i] - '0';
        i++;
    }

    if (result % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int binaryConverter(int n)
{
    int rem=0,result=0;
    if(n==0)
    {
        return 0;
    }
    rem=n%2;
    return binaryConverter(n/2)*10+rem;
 
}